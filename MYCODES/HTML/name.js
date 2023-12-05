<!DOCTYPE html>
<html>
<head>
    <title>Change Color on Button Press</title>
    <style>
        body {
            text-align: center;
            font-family: Arial, sans-serif;
        }
        #container {
            margin: 100px auto;
            padding: 20px;
            background-color: lightgray;
            border-radius: 10px;
        }
        #colorButton {
            padding: 10px 20px;
            font-size: 18px;
            background-color: #0074d9;
            color: white;
            border: none;
            cursor: pointer;
        }
    </style>
</head>
<body>
    <div id="container">
        <h1>Change Background Color</h1>
        <p>Press the button below to change the background color:</p>
        <button id="colorButton">Change Color</button>
    </div>

    <script>
        const container = document.getElementById('container');
        const colorButton = document.getElementById('colorButton');

        colorButton.addEventListener('click', () => {
            // Generate a random color
            const randomColor = getRandomColor();

            // Change the background color of the container
            container.style.backgroundColor = randomColor;
        });

        function getRandomColor() {
            const letters = '0123456789ABCDEF';
            let color = '#';
            for (let i = 0; i < 6; i++) {
                color += letters[Math.floor(Math.random() * 16)];
            }
            return color;
        }
    </script>
</body>
</html>

