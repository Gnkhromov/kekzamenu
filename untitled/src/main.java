import java.net.*;
import java.io.*;
import javax.xml.parsers.*;
import org.w3c.dom.*;
import org.xml.sax.InputSource;

public class main {
    public static void main(String[] args) throws Exception {
        URL url = new URL("http://www.cbr.ru/scripts/XML_daily.asp");
        HttpURLConnection conn = (HttpURLConnection) url.openConnection();
        conn.setRequestMethod("GET");
        BufferedReader in = new BufferedReader(new InputStreamReader(conn.getInputStream(), "Windows-1251"));
        String inputLine;
        StringBuilder response = new StringBuilder();
        while ((inputLine = in.readLine()) != null) {
            response.append(inputLine);
        }
        in.close();

        DocumentBuilderFactory factory = DocumentBuilderFactory.newInstance();
        DocumentBuilder builder = factory.newDocumentBuilder();
        InputSource is = new InputSource(new StringReader(response.toString()));
        Document doc = builder.parse(is);

        NodeList nodeList = doc.getElementsByTagName("Valute");
        for (int i = 0; i < nodeList.getLength(); i++) {
            Element element = (Element) nodeList.item(i);
            String code = element.getElementsByTagName("CharCode").item(0).getTextContent();
            String name = element.getElementsByTagName("Name").item(0).getTextContent();
            double value = Double.parseDouble(element.getElementsByTagName("Value").item(0).getTextContent().replace(",", "."));
            System.out.println(code + " - " + name + ": " + value);
        }
    }
}