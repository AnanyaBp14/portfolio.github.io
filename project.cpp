
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Home</title>
    <style>
        /* General Styles */
        html {
            scroll-behavior: smooth;
        }

        body {
            font-family: 'Roboto', sans-serif;
            background-color: #F7D1A4; /* Soft Peach */
            margin: 0;
            padding: 0;
            color: #617E96; /* Slate Blue */
            line-height: 1.6;
        }
        
        /* Navigation Bar */
        nav {
            background-color: #617E96; /* Slate Blue */
            padding: 20px 0;
            text-align: center;
            box-shadow: 0 4px 6px rgba(0, 0, 0, 0.1);
        }
        
        nav a {
            color: #FFFFFF; /* White */
            text-decoration: none;
            margin: 0 20px;
            font-weight: bold;
            font-size: 1.1rem;
            padding: 10px 15px;
            transition: color 0.3s ease, transform 0.3s ease;
        }
        
        nav a:hover {
            color: #A0CDCA; /* Cool Aquamarine */
            transform: translateY(-3px);
        }
        
        /* Header */
        header {
            background-color: #006D77; /* Deep Teal */
            text-align: center;
            padding: 30px 15px;
            color: #FFFFFF; /* White */
            font-size: 3rem;
            text-transform: uppercase;
            letter-spacing: 2px;
            box-shadow: 0 6px 10px rgba(0, 0, 0, 0.1);
        }
        
        /* Main Content */
        main {
            max-width: 1200px;
            margin: 40px auto;
            padding: 30px;
            background-color: #FFFFFF; /* White for contrast */
            border-radius: 12px;
            box-shadow: 0 6px 12px rgba(0, 0, 0, 0.1);
        }
        
        main h1, main h2 {
            color: #A0CDCA; /* Cool Aquamarine */
            margin-bottom: 15px;
            text-align: center;
            font-weight: 600;
        }
        
        main h3 {
            color: #617E96; /* Slate Blue */
            font-size: 1.2rem;
            line-height: 1.8;
        }
        
        /* Business Cases Table */
        table {
            width: 100%;
            border-collapse: collapse;
            margin-top: 30px;
        }
        
        table th, table td {
            padding: 12px;
            text-align: left;
            border-bottom: 1px solid #E0E0E0;
        }
        
        table th {
            background-color: #264653; /* Rich Navy Blue */
            color: #FFFFFF; /* White */
            font-weight: bold;
        }
        
        table td {
            background-color: #F9F9F9;
        }
        
        table tr:hover {
            background-color: #E1E1E1;
        }
        
        /* Section Boxes */
        section {
            margin-bottom: 40px;
        }
        
        .content-box {
            background-color: #FFFFFF; /* White for the box background */
            padding: 25px;
            border-left: 5px solid #D9B29F; /* Soft Lavender accent */
            margin-bottom: 30px;
            border-radius: 8px;
            box-shadow: 0 4px 6px rgba(0, 0, 0, 0.1);
        }
        
        /* Footer */
        footer {
            background-color: #006D77; /* Deep Teal */
            color: #FFFFFF; /* White */
            text-align: center;
            padding: 20px 0;
            margin-top: 40px;
        }
        
        footer p {
            margin: 0;
            font-size: 1rem;
        }
        
        /* Link Styling */
        a {
            color: #A0CDCA; /* Cool Aquamarine */
            text-decoration: none;
        }
        
        a:hover {
            text-decoration: underline;
            color: #617E96; /* Slate Blue */
        }
        
        /* Responsive Design */
        @media (max-width: 768px) {
            nav {
                padding: 15px 0;
            }
        
            nav a {
                display: block;
                margin: 10px 0;
                font-size: 1rem;
            }
        
            main {
                padding: 20px;
            }
        
            header {
                font-size: 2.2rem;
            }
        
            table th, table td {
                font-size: 0.9rem;
                padding: 10px;
            }
        
            .content-box {
                padding: 20px;
            }
        
            footer {
                font-size: 0.9rem;
                padding: 15px 0;
            }
        }
    </style>
</head>
<body>
    <!-- Navigation Bar -->
    <nav>
        <a href="home.html">Home</a>
        <a href="project.html">Project</a>
        <a href="ananya.html">Ananya</a>
        <a href="chinmayi.html">Chinmayi</a>
        <a href="ria.html">Ria</a>
        <a href="sanjana.html">Sanjana</a>
        <a href="#about">About</a>
    </nav>

    <!-- Header Section -->
    <header>
        <h2><b><strong>About The Project</strong></b></h2>
    </header>

    <!-- Main Content -->
    <main>
        <section id="city-plan">
            <h2>City Plan</h2>
            <img src="city_plan.jpg" alt="City Plan" class="city-plan">
        </section>
        
        <section id="problem-statements">
            <h2>Problem Statement</h2>
            <p>Our project tackles six critical challenges faced in urban cities using advanced algorithms and real-time data processing techniques.</p>
        </section>
        
        <section id="business-cases">
            <h1>Business Cases Identified</h1>
            <table>
                <thead>
                    <tr>
                        <th>SL NO</th>
                        <th>Business Case Identified</th>
                        <th>Description</th>
                        <th>Owner</th>
                        <th>Problem Tools</th>
                    </tr>
                </thead>
                <tbody>
                    <tr>
                        <td>1</td>
                        <td>Real-time Traffic Monitoring</td>
                        <td>Collect, process, and store traffic data in real-time using IoT devices and sensors.</td>
                        <td>Ananya B P</td>
                        <td>Arrays, Hashing, Sparse Table</td>
                    </tr>
                    <tr>
                        <td>2</td>
                        <td>Citizen Feedback Processing</td>
                        <td>Collect, analyze, and act on citizen feedback regarding traffic issues.</td>
                        <td>Ria</td>
                        <td>Brute Force String Search, Rabin-Karp, Lookup Table</td>
                    </tr>
                    <tr>
                        <td>3</td>
                        <td>Smart Traffic Signal Control</td>
                        <td>Dynamically adjust signal timings based on traffic flow and congestion.</td>
                        <td>Sanjana</td>
                        <td>Heap, AVL Tree, BFS, Binary Search Tree</td>
                    </tr>
                    <tr>
                        <td>4</td>
                        <td>Smart Parking Systems</td>
                        <td>Use Trie to store and search for parking space availability in real time, providing instant updates.</td>
                        <td>Chinmayi K B</td>
                        <td>Trie, Queue</td>
                    </tr>
                    <tr>
                        <td>5</td>
                        <td>Emergency Vehicle Routing</td>
                        <td>Implement a 2-3 Tree to handle route optimization for emergency vehicles, ensuring minimal delay.</td>
                        <td>Ria and Sanjana</td>
                        <td>2-3 Tree, Dijkstra’s Algorithm</td>
                    </tr>
                    <tr>
                        <td>6</td>
                        <td>EV Charging Station Management</td>
                        <td>Locate and manage EV charging stations in the city.</td>
                        <td>Ananya and Chinmayi</td>
                        <td>Binary Search Tree, Trie, Arrays</td>
                    </tr>
                </tbody>
            </table>
        </section>
        
        <section id="project-description">
            <h2>Project Description</h2>
            <h3><p>Urban mobility faces issues like traffic congestion, lack of parking, and slow emergency response. A smart system that manages traffic, parking, and emergencies can improve efficiency and reduce delays.</p></h3>
        </section>
    </main>

    <!-- Footer Section -->
    <footer>
        <p>&copy; <span id="year"></span> Vayujiva. All rights reserved.</p>
    </footer>

    <script src="script.js"></script>
</body>
</html>

  
