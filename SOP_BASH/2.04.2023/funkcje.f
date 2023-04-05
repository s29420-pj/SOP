function menu {
    echo "MENU"
    echo "c - aktualny katalog"
    echo "u - nazwa użytkownika"
    echo "h - katalog domowy"
    echo "Użyj CTRL + C, aby wyjść"
    echo " "
}

function wybor {
    read -p "Wybierz opcje: " option

    case $option in
        "c") echo "Aktualny katalog: $(pwd)";;
        "u") echo "Użytkownik $(whoami)";;
        "h") echo "Katalog domowy: $HOME";;
    esac
}
