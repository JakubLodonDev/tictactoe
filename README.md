# Cel repozytorium

Przygotowanie scenariuszy i przypadków testowych na podstawie gry tic-tac-toe 

# Gra konsolowa „Tic-tac-toe”
Gra jest przeznaczona dla dwóch graczy znajdujących się w jednym pomieszczeniu. Użytkownicy na zmianę wybierają pola na planszy 3X3, w których chcą wstawić własne znaki. Umieszczenie znaku przez gracza we wskazanym przez niego miejscu odbywa się poprzez wprowadzenie numeru wiersza oraz numeru kolumny pola. Grę wygrywa użytkownik, który jako pierwszy zbuduje nieprzerwaną linię prostą lub przekątną składającą się z 3 znaków.


## Założenia programu „Tic-tac-toe”
<ol>
  <li>Menu:
    <ul>
      <li>Rozpoczęcie gry odbywa się poprzez wprowadzenie komendy „gram”.</li>
      <li>Zakończenie gry odbywa się poprzez wprowadzenie komendy „koniec”.</li>
      <li>Wprowadzenie komendy „instrukcja” powoduje udostepnienie instrukcji gry.</li>
   </ul>
  </li>
  <li>Przebieg gry:
    <ul>
     <li>Na początku gry prezentowana jest pusta plansza o wymiarach 3x3.</li>
     <li>Grę rozpoczyna gracz używający znaku „O”. Ruchy graczy wykonywane są naprzemiennie do momentu wygranej lub remisu. </li>
     <li>Gracze poruszają się po planszy wpisując współrzędne zaczynającej się od 1,1.</li>
     <li>Gra jest odświeżana w czasie rzeczywistym.</li>
     <li>Zapełnienie możliwych pól na planszy, bez możliwości wskazania gracza który wygrał, powoduje wyświetlenie komunikatu o remisie.</li>
     <li>Po zakończonej partii, gracze mają możliwość ponownego zagrania lub zakończenia rozgrywki. </li>
    </ul>
  </li>
  <li>Zawartość instrukcji:
    <ul>
      <li>Opis sposobu poruszania się po planszy,</li>
      <li>Warunki zwycięstwa,</li>
      <li>Spis komend, które mogą być użyte w grze. </li>
    </ul>
  </li>
<ol>
