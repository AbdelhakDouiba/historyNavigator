# Navigator History Tracker

A simple navigation tool with history tracking, built in C, that allows users to navigate pages and manage their browsing history. This project includes back and forward navigation functionality, enabling easy exploration of previously visited pages.


## Features

-   **Navigate to New Pages**: Users can visit new pages and add them to the history stack.
-   **Back and Forward Navigation**: Supports navigating backward and forward through the browsing history.
-   **History Management**: Each visited page is saved in a stack, enabling users to revisit or manage past pages.

## Installation

 **1.  Clone the repository**:


   ```bash
   git clone https://github.com/AbdelhakDouiba/historyNavigator.git
   cd historyNavigator
   ```
    
    
  **2. Compile the Code**:
    
  ```bash
  gcc *.c *.h -o navigator 
  ```
    
**3. Run the Application**:
    
  ```bash
  ./navigator 
  ```

## Usage

-   **Starting the Browser**: Launch the program and follow the on-screen prompts to navigate pages.
    
-   **Commands**:
    
    -   `N`: Move to the next page in the history stack, if available.
    -   `P`: Go back to the previous page.
    -   `END`: Exit the browser and clear history.
    
    You can also type a URL or page name to navigate directly to a new page, which will be added to the history.

## Example

```plaintext
Welcome to the navigator !!!
! enter END if you want to exit
enter N to see the next page(if existed) and P for Previous page (if existed)
Navigate to : example.com
Welcome in -> example.com

Navigate to : wikipedia.org
Welcome in -> wikipedia.org

Navigate to: P
Welcome in -> example.com

Navigate to: END
Goodbye!
```

## Contributions

Contributions are welcome! Please fork the repository and create a pull request for any feature additions or bug fixes.


## Contact Author
[![linkedin](https://img.shields.io/badge/linkedin-0A66C2?style=for-the-badge&logo=linkedin&logoColor=white)](https://www.linkedin.com/in/douiba-abdelhak/)
[![X](https://img.shields.io/badge/x.com-000000?style=for-the-badge&logo=x&logoColor=white)](https://x.com/douiba_abdelhak)
