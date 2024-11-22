import javafx.application.Application;
import javafx.scene.Scene;
import javafx.scene.control.Label;
import javafx.scene.layout.StackPane;
import javafx.scene.paint.Color;
import javafx.scene.shape.Rectangle;
import javafx.stage.Stage;

public class JogoDeCartas extends Application {

    @Override
    public void start(Stage primaryStage) {
        // Criar um painel de cartas
        StackPane root = new StackPane();
        
        // Exemplo de carta
        String[] naipes = {"♠", "♣", "♦", "♥"};
        String[] valores = {"2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K", "A"};
        
        // Gerando uma carta exemplo (ás de copas)
        String valor = "A";
        String naipe = "♥";
        Color cor = Color.RED; // Cores: Vermelho para copas (♥) e ouros (♦), Preto para espadas (♠) e paus (♣)
        
        // Criar o retângulo da carta
        Rectangle carta = new Rectangle(120, 180); // Tamanho da carta
        carta.setFill(Color.WHITE);
        carta.setStroke(Color.BLACK);
        
        // Criar o texto da carta
        Label label = new Label(valor + " " + naipe);
        label.setStyle("-fx-font-size: 24px;");
        
        // Definir cor do texto com base no naipe
        label.setTextFill(cor);
        
        // Adicionar o texto sobre o retângulo
        StackPane cartaPane = new StackPane();
        cartaPane.getChildren().addAll(carta, label);
        
        // Posicionar a carta no centro
        root.getChildren().add(cartaPane);
        
        // Criar a cena e definir o palco
        Scene scene = new Scene(root, 400, 400);
        primaryStage.setTitle("Jogo de Cartas");
        primaryStage.setScene(scene);
        primaryStage.show();
    }

    public static void main(String[] args) {
        launch(args);
    }
}
