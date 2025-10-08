# CSS EMG

* **CSS** stands for **Cascading Style Sheets**.
* It is used to **style** and **format** the content written in **HTML**.
* CSS controls the **appearance** of elements like **fonts**, **colors**, **spacing**, and **layout**.
* It separates the **structure** (HTML) from the **design** (CSS), making websites easier to manage and update.
* CSS helps create **responsive** designs that adjust to different screen sizes and devices.
* By using CSS, web pages look consistent across different browsers.

## Table Of Contents
- [CSS EMG](#css-emg)
  - [Table Of Contents](#table-of-contents)
  - [General Styles in CSS (`style.css`)](#general-styles-in-css-stylecss)
  - [CSS Rules Breakdown:](#css-rules-breakdown)
  - [HTML+CSS Structure (`index.html`)](#htmlcss-structure-indexhtml)
    - [HTML+CSS Notes Breakdown:](#htmlcss-notes-breakdown)
    - [Key CSS Features and Concepts to Understand](#key-css-features-and-concepts-to-understand)
      - [1. Selectors](#1-selectors)
      - [2. Cascade](#2-cascade)
      - [3. Box Model](#3-box-model)
      - [4. Positioning](#4-positioning)
      - [5. Responsive Design](#5-responsive-design)
- [Code](#code)

## General Styles in CSS (`style.css`)

This CSS file includes various styling properties applied to different HTML elements, targeting specific selectors, IDs, and classes.

---

## CSS Rules Breakdown:

1. **Universal Selector (`*`)**

   * Applies a **blueviolet** color to all elements on the page and sets a **background color** of **black**.
   * **Padding and margin adjustments** are applied globally (1% margin).

   ```css
   * {
       color: blueviolet;
       background-color: black;
       margin: 1%;
   }
   ```

2. **Element-Specific Styles**

   * `h1`: Applies **blanchedalmond** color and **xx-large** font size.
   * `p`: Sets the text color to **red** (`rgb(249, 0, 0)`).

   ```css
   h1 {
       color: blanchedalmond;
       font-size: xx-large;
   }

   p {
       color: rgb(249, 0, 0);
   }
   ```

3. **ID Selectors**

   * `#ID1`, `#ID2`, `#ID3`, etc., target individual elements by ID and apply custom color styles.

   ```css
   #ID1 { color: rgb(0, 8, 255); }
   #ID2 { color: rgb(0, 255, 0); }
   #ID3 { color: rgb(255, 0, 0); }
   ```

4. **Class Selectors**

   * `.CLASS1` is applied to elements with the class "CLASS1" and sets a specific **greenish** color.

   ```css
   .CLASS1 {
       color: rgb(112, 109, 3);
   }
   ```

5. **Group Selectors**

   * Multiple IDs (`#ID4, #ID5, #ID6`) are grouped together to apply **pink** color to these elements.

   ```css
   #ID4, #ID5, #ID6 {
       color: rgb(255, 0, 195);
   }
   ```

6. **Visibility and Background**

   * **Visibility**: `#box5` is visible, and `#box6` is hidden.
   * **Background images**: Applied to `#box4` with specific properties like **containment**, **no-repeat**, and **top positioning**.

   ```css
   #box5 { visibility: visible; }
   #box6 { visibility: hidden; }
   #box4 {
       background-image: url(ss1.png);
       height: 500px;
       width: 100%;
       background-size: contain;
       background-repeat: no-repeat;
       background-position: top;
   }
   ```

7. **Text Styling**

   * **Text alignment** (`text-align`) applied to `#text1`, `#text2`, and `#text3` (center, right, left).
   * **Text decorations** like **underline**, **overline**, and **line-through** applied to `#text4`, `#text5`, etc.
   * **Text transformation** (`uppercase`, `lowercase`, `capitalize`, `none`) for specific elements.
   * **Text decoration styles** like **dotted**, **dashed**, **wavy** are used in `#text14` to `#text18`.

   ```css
   #text1 { text-align: center; }
   #text4 { text-decoration: underline; }
   #text10 { text-transform: uppercase; }
   #text14 { text-decoration: underline; text-decoration-style: double; }
   ```

8. **Font Properties**

   * Different font **sizes** (`font-size: 10px` to `40px`).
   * **Font weight** variations from **100** to **900**.
   * **Font style** (italic, oblique, normal) for specific elements.

   ```css
   #text21 { font-size: 10px; }
   #text25 { font-weight: 100; }
   #text29 { font-style: italic; }
   ```

9. **Padding and Margin**

   * **Padding and margin** shorthand applied to specific elements like `#text36`, `#text37` with specific pixel values.

   ```css
   #text36 { padding-left: 5px; padding-right: 5px; padding-top: 5px; padding-bottom: 5px; }
   #text37 { margin: 5px 5px 5px 5px; }
   ```

10. **Borders**

    * **Borders** applied with rounded edges (`border-radius: 50px`), and dashed borders (`border-style: dashed`).

    ```css
    #ID9 { border: 5px solid rgb(255, 0, 0); border-radius: 50px; border-style: dashed; }
    ```

---

## HTML+CSS Structure (`index.html`)

The HTML file includes various sections, with embedded CSS for styling the page.

### HTML+CSS Notes Breakdown:

1. **HTML Boilerplate**

   * Includes basic structure: `<!DOCTYPE html>`, `html`, `head`, and `body` tags, with a **meta charset** for character encoding and a **meta viewport** for responsive design.
   * Title of the page set to `Final`.

   ```html
   <meta charset="UTF-8">
   <meta name="viewport" content="width=device-width, initial-scale=1.0">
   <title>Final</title>
   ```

2. **Internal CSS**

   * Internal styles are embedded within the `style` tag in the head.
   * Internal styles are applied before inline or external styles based on the CSS cascade.

3. **Inline Style Example**

   * `<p style="color: rgb(0, 255, 170);">` demonstrates the use of inline styling in HTML, which has the highest specificity and overrides internal and external styles.

4. **Element Structure**

   * Various elements are styled using their respective selectors. For example:

     * `<h1>` is styled with **xx-large** font size and a specific color.
     * Divs and other elements have specific styles applied, such as `color`, `background-color`, `visibility`, etc.

5. **CSS Cascade: Internal > Inline > External**

   * Internal style (`<style>`) is applied first, followed by inline styles, and lastly external styles linked via the `link` tag. This order defines the **cascade** in CSS.

6. **Dev Tools for Debugging**

   * Browser DevTools help in inspecting, modifying, and debugging CSS directly in the browser. Changes can be live-edited in the **Style Panel**.
   * **Box Model** helps understand padding, margin, border, and content dimensions.
   * **Network Tab** shows actual data being downloaded, which is useful for debugging external resource loading.

   ```html
   <pre>Browser Dev tools helps in debugging...</pre>
   ```

7. **CSS Box Model and Positioning**

   * Describes the **box model**: content, padding, border, and margin.
   * **Positioning properties** like static, relative, absolute, and fixed are introduced, explaining the difference in positioning contexts.

8. **Responsive Design**

   * Emphasizes the importance of making websites **responsive** (fit different screen sizes) using CSS.
   * Relative units like `em`, `rem`, `%`, `vw`, and `vh` are essential for flexibility across screen sizes.

9. **Semantic vs Non-Semantic Tags**

   * **Semantic tags** like `<header>`, `<footer>`, `<main>`, `<article>`, etc., are used for clearer content definition and better SEO.
   * Non-semantic tags like `<div>` and `<span>` don't provide content meaning.

10. **Font Import from Google Fonts**

    * A **Google Font** (`Dancing Script`) is linked in the `<head>` to be used in the page.

    ```html
    <link href="https://fonts.googleapis.com/css2?family=Dancing+Script:wght@400..700&display=swap" rel="stylesheet">
    ```

---
### Key CSS Features and Concepts to Understand

#### 1. Selectors

* **CSS Selectors** are used to target HTML elements and apply styles to them.
* **ID Selector (`#ID`)**: Targets elements by their unique `id` attribute. IDs are unique on a page, so only one element should use each ID. Example:

  ```css
  #header { color: blue; }
  ```
* **Class Selector (`.CLASS`)**: Targets elements with the specified class. Multiple elements can share the same class. Example:

  ```css
  .button { background-color: green; }
  ```
* **Universal Selector (`*`)**: Applies styles to all elements on the page. Example:

  ```css
  * { margin: 0; padding: 0; }
  ```
* **Element Selector (`element`)**: Targets elements by their tag name. Example:

  ```css
  p { color: red; }
  ```

---

#### 2. Cascade

* **The Cascade** refers to the process of determining which CSS rule to apply when multiple rules target the same element.
* **Order of Application**:

  * **Inline styles** (styles written directly in the element) have the highest specificity and are applied first.
  * **Internal styles** (styles defined within the `<style>` tag in the HTML document) come next.
  * **External styles** (linked through the `<link>` tag or imported from external files) have the lowest priority.
* **Specificity**: More specific selectors (e.g., ID selectors) will override less specific ones (e.g., element selectors).

---

#### 3. Box Model

* **The Box Model** is a concept that describes the rectangular boxes that are generated for elements in the document tree.
* It consists of four components:

  1. **Content**: The actual content inside the element, such as text or images.
  2. **Padding**: Space between the content and the border.
  3. **Border**: A line surrounding the element's content and padding.
  4. **Margin**: Space between the border and the surrounding elements.
* Example:

  ```css
  div {
    margin: 20px;
    padding: 10px;
    border: 1px solid black;
  }
  ```
* Understanding how these areas work is essential for precise layout control.

---

#### 4. Positioning

* **Positioning** determines how an element is placed on the page.

  1. **Static**: Default positioning. Elements are placed according to the normal document flow.

     ```css
     div { position: static; }
     ```
  2. **Relative**: Positioned relative to its normal position, leaving space for the element in its original location.

     ```css
     div { position: relative; top: 20px; left: 30px; }
     ```
  3. **Absolute**: Positioned relative to the nearest positioned ancestor (not `static`), or to the document body if none exists. It removes the element from the normal document flow.

     ```css
     div { position: absolute; top: 20px; left: 30px; }
     ```
  4. **Fixed**: Positioned relative to the viewport, meaning it stays fixed even when the page is scrolled.

     ```css
     div { position: fixed; top: 20px; left: 30px; }
     ```
  5. **Sticky**: The element toggles between relative and fixed, depending on the user's scroll position.

     ```css
     div { position: sticky; top: 0; }
     ```

---

#### 5. Responsive Design

* **Responsive Design** allows web pages to adjust their layout and content according to the size of the viewport, ensuring a good user experience on all devices.
* **Relative Units**: Use units that scale with the screen or font size, making it easier to create flexible layouts.

  * **`em`**: Relative to the font size of the element. Example: `2em` means 2 times the font size of the element.
  * **`rem`**: Relative to the font size of the root element (`<html>`). Example: `2rem` is 2 times the font size of the root element.
  * **`vw` (viewport width)**: Relative to 1% of the width of the viewport.
  * **`vh` (viewport height)**: Relative to 1% of the height of the viewport.
  * **`%`**: Relative to the parent element’s size.
* **Media Queries**: CSS rules can be applied based on different device characteristics, such as screen width. Example:

  ```css
  @media (max-width: 600px) {
    body { background-color: lightblue; }
  }
  ```

  * This rule will apply when the viewport width is 600px or less.

**Key Concept**: **Fluid layouts** adjust the sizes of elements based on the screen size, using flexible units and media queries to ensure that elements like text, images, and divs resize dynamically.

---
# Code
- index.html
```html
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Final</title>
    <style>
        /*L1*/
        /* Comments ;0 */
        *{color: blueviolet;} /*color property*/
        h1{color: blanchedalmond;font-size: xx-large; }
        p{color: rgb(249, 0, 0);}
        #ID1{color: rgb(0, 8, 255);}
        #ID2{color: rgb(0, 255, 0);}
        #ID3{color: rgb(255, 0, 0);}
        .CLASS1{color: rgb(112, 109, 3);}
        #ID4,#ID5,#ID6{color: rgb(255, 0, 195);}
        #ID4 p{color: rgb(0, 255, 255);}
        
        /*L2*/
        *{background-color: black;}
        button{color: rgb(9, 17, 255); background-color: rgb(127, 255, 212);}
        #ID7{color: rgb(255, 0, 0); background-color: rgb(0, 255, 0);}
        #ID8{color: rgb(255, 255, 255); background-color: rgb(0, 255, 0,0.5);}
        .box{color: slategrey;width: 100px;}
        #box1{background-color: rgb(0, 255, 0);}
        #box2{background-color: rosybrown;}
        #box3{background-color: rgb(255, 0, 179);}
        /* Box bg image ,use contain,height,repeat */
        #box4{background-image: url(ss1.png);height: 500px;width: 100%;background-size: contain;background-repeat: no-repeat;background-position: top;}
        /* shorthand #box4{background: url(ss1.png) no-repeat top/contain;height: 500px;width: 100%;} */
        #box5{visibility: visible;}
        #box6{visibility: hidden;}

        /* L3 */
        /* text-align */
        #text1{text-align: center;}
        #text2{text-align: right;}
        #text3{text-align: left;}
        /* text-decoration */
        #text4{text-decoration: underline;}
        #text5{text-decoration: overline;}
        #text6{text-decoration: line-through;}
        /* text-decoration-color */
        #text7{text-decoration: underline overline;text-decoration-color: bisque;}
        #text8{text-decoration: underline line-through;text-decoration-color: darkgoldenrod;}
        #text9{text-decoration: overline line-through;text-decoration-color: darkmagenta;}
        /* text-transform */
        #text10{text-transform: uppercase;}
        #text11{text-transform: lowercase;}
        #text12{text-transform: capitalize;}
        #text13{text-transform: none;}
        /* text-decoration-style */
        #text14{text-decoration: underline ;text-decoration-style: double;}
        #text15{text-decoration: underline ;text-decoration-style: dotted;}
        #text16{text-decoration: underline;text-decoration-style: dashed;}
        #text17{text-decoration: underline;text-decoration-style: wavy;}
        #text18{text-decoration: underline;text-decoration-style: solid;}
        /* line-height */
        #text19{line-height: 20px;}
        #text20{line-height: 6px;}
        /* font-size */
        #text21{font-size: 10px;}
        #text22{font-size: 20px;}
        #text23{font-size: 30px;}
        #text24{font-size: 40px;}
        /* font-weight */
        #text25{font-weight: 100;}/*min 100*/
        #text26{font-weight: 400;}
        #text27{font-weight: 600;}
        #text28{font-weight: 900;}/*max 900*/
        /* font-style */
        #text29{font-style: italic;}
        #text30{font-style: oblique;}
        #text31{font-style: normal;}
        /* font-family */
        #text32{font-family: 'Courier New', Courier, monospace;}
        #text33{font-family: 'Times New Roman', Times, serif;}
        #text34{font-family: 'Arial', sans-serif;}
        #text35{font-family: 'Dancing Script', cursive;}


        /* L4 */
        /* padding top bottom etc eg */
        *{margin: 1%;  }
        #text36{padding-left: 5px; padding-right: 5px; padding-top: 5px; padding-bottom: 5px;}
        /* padding shorthand */
        /* #text36{padding: 5px 5px 5px 5px;} */
        /* margin shorthand */
        #text37{margin: 5px 5px 5px 5px;}
        /* border dashed rounded */
        #ID9{border: 5px solid rgb(255, 0, 0) ; border-radius: 50px; border-style: dashed;}

        /* L5 */
        /* display properties */
        .bBox{background-color: rgb(0, 255, 0);width: 100px;display: block;}
        .iBox{background-color: rgb(255, 0, 0);width: 100px;display: inline;}







    </style>
    <link rel="stylesheet" href="style.css">

    <!-- For L3 FONT FAMILY EXPORT -->
    <link rel="preconnect" href="https://fonts.googleapis.com">
    <link rel="preconnect" href="https://fonts.gstatic.com" crossorigin>
    <link href="https://fonts.googleapis.com/css2?family=Dancing+Script:wght@400..700&display=swap" rel="stylesheet">

</head>
<body>
    <h1>L1</h1>
    <hr>
    selector {property: value;}
<hr>
    <p>Internal Style <br>Lorem ipsum dolor sit, amet consectetur adipisicing elit. Voluptate dolorum cumque vero aut eos quibusdam eum facilis tempore. Modi fugit nobis illum, repellat animi aspernatur delectus dolore consequuntur totam ad?</p>
    <p style="color: rgb(0, 255, 170);">
    Inline style 
    <br> Lorem ipsum, dolor sit amet consectetur adipisicing elit. Modi, dolorum?
    <p id="ID0">External Style <br>
        Lorem ipsum dolor sit amet consectetur, adipisicing elit. A, enim.</p>
    </p>
    <hr>
    <p>Internal Style > Inline Style > External Style</p>
    <hr>
    /* Comments ;0 */
    ID Selectors
    <div id="ID1">ID1 #ID1{color: rgb(0, 8, 255);}</div>
    <div id="ID2">ID2 #ID2{color: rgb(0, 255, 0);}</div>
    <div id="ID3">ID3 #ID3{color: rgb(255, 0, 0);}</div>
    <div class="CLASS1">Class Selectors .CLASS1{color: rgb(112, 109, 3);}<br>CLASS1</div>
    <div class="CLASS1">CLASS1</div>
    <div class="CLASS1">CLASS1</div>
    <div id="ID4">Group Selectors #ID4,#ID5,#ID6{color: rgb(255, 0, 195);}
       <br> ID4 
    <p>Descendant Selector #ID4,#ID5,#ID6{color: rgb(255, 0, 195);}
        <br> Descendants of ID4
    </p></div>
    <div id="ID5">ID5</div>
    <div id="ID6">ID6</div>
    <hr>
    <pre>Browser Dev tools helps in
        Debugging
        Experiment
        Modyfying Code & then copy paste back to IDE
        HTML , CSS , JS , Network , Console Live EDIT OPTIONS
    But,they are temporary changes
    
    CSS 
        Style Panel
        Box Model
        Changes happpening only to client side

    Source tab : local 127.0.0.1:5000
        it shows linking from top,downloaded by browser and render

    Network Tab : Actual Data Download ( CALLS )

    Performance Tab : How much time taken to load the page ,To check lags etc.
    frames time etc
    load time,functions etc .
    </pre>
    <hr>
    <h1>L2</h1>
    <button>Click me ;0</button>
    <button>Click me ;0</button>
    <div id="ID7">ID7</div>
    <div id="ID8">
    hex : RR GG BB <br>
    RGB : 0-255,0-255,0-255 <br>
    RGB Alpha : 0-255,0-255,0-255,0-1 can be 0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1
    </div>
    <hr>
    <div class="box" id="box1">box 1</div>
    <div class="box" id="box2">box 2</div>
    <div class="box" id="box3">box 3</div>
    <hr>
    <div class="box" id="box4">background-image</div>
    <br>
    <hr>

    <img src="ss2.png" alt="ss2" height="50px"> <br>
    <div class="box" id="box5">box 5 Visible</div>
    <div class="box" id="box6">box 6 Hidden</div>
    <hr>
    <h1>L3</h1>
    <hr>Text-Align<br><br>
    <div id="text1">Text1</div><br>
    <div id="text2">Text2</div><br>
    <div id="text3">Text3</div><br>
    <hr>Text-Decoration<br><br>
    <div id="text4">Text4</div><br>
    <div id="text5">Text5</div><br>
    <div id="text6">Text6</div><br>
    <hr>Text-Decoration-Color<br> <br>
    <div id="text7">Text7</div><br>
    <div id="text8">Text8</div><br>
    <div id="text9">Text9</div><br>
    <hr>Text-Tranform<br> <br>
    <div id="text10">Text10</div><br>
    <div id="text11">Text11</div><br>
    <div id="text12">Text12</div><br>
    <div id="text13">Text13</div><br>
    <hr>Text-Decoration-Style<br> <br>
    <div id="text14">Text14</div><br>
    <div id="text15">Text15</div><br>
    <div id="text16">Text16</div><br>
    <div id="text17">Text17</div><br>
    <div id="text18">Text18</div><br>
    <hr>Line-Height<br> <br>
    <div id="text19">Text19 Lorem ipsum dolor sit amet, consectetur adipisicing elit. Fugit sequi tenetur veniam minus ab aliquam nihil quaerat mollitia enim quasi?</div><br>
    <div id="text20">Text20 Lorem ipsum dolor sit amet consectetur adipisicing elit. In dolores, voluptas ipsam aliquam ipsa incidunt laudantium suscipit ab expedita. Dignissimos quos enim, perferendis facilis velit error nemo pariatur placeat quaerat?</div><br>
    <hr>Font-Size<br> <br>
    <div id="text21">Text21</div><br>
    <div id="text22">Text22</div><br>
    <div id="text23">Text23</div><br>
    <div id="text24">Text24</div><br>
    <hr>Font-Weight<br> <br>
    <div id="text25">Text25</div><br>
    <div id="text26">Text26</div><br>
    <div id="text27">Text27</div><br>
    <div id="text28">Text28</div><br>
    <hr>Font-Style<br> <br>
    <div id="text29">Text29</div><br>
    <div id="text30">Text30</div><br>
    <div id="text31">Text31</div><br>
    <hr>Font-Family<br> <br>
    <div id="text32">Text32</div><br>
    <div id="text33">Text33</div><br>
    <div id="text34">Text34</div><br>
    https://fonts.google.com/
    <img src="ss3.png" alt="" height="250px">
    <div id="text35">Text35 Lorem ipsum dolor sit amet consectetur adipisicing elit. Impedit dolorem fuga et accusamus a, necessitatibus optio ab odit quam illum, consequatur asperiores! Labore corrupti expedita magnam ducimus, provident perspiciatis quidem.</div>
    <hr>
    <h1>L4</h1>
    <hr>
    Padding<br>
    <div id="text36">Text36</div>
    <div id="text37">Text37</div>
    <hr>
    <button id="ID9">Border</button>

    <h1>L5</h1>
    <hr>
    Dislay Properties 
    Block Elements : div , p , h1 , h2 , h3 , h4 , h5 , h6 , ol , ul , li , table , form
    Inline Elements : span , a , img , input , button , select , textarea ,strong ,em 
    <div id="block">
        <div id="divbox1" class="bBox">box1</div>
        <div id="divbox2" class="bBox">box2</div>
        <div id="divbox3" class="bBox">box3</div>
    </div>
    <div id="inline">
        <div id="divbox1" class="iBox">box1</div>
        <div id="divbox2" class="iBox">box2</div>
        <div id="divbox3" class="iBox">box3</div>
    </div>
    <hr>
    Responsive Websites : Responsive Design is an approach to web design that makes web pages render well on a variety of devices and window or screen sizes.
    <hr>
    Relative Units css cheatsheet : 
    <ol>
        <li>em : Relative to the font-size of the element (2em means 2 times the size of the current font)</li>
        <li>rem : Relative to font-size of the root element</li>
        <li>vw : Relative to 1% of the width of the viewport</li>
        <li>vh : Relative to 1% of the height of the viewport</li>
        <li>% : Relative to the parent element</li>
        <li>px : Relative to the screen pixel</li>
    </ol>


    <hr>
    Position property
    <ol>
        <li>static : Default value , element is positioned according to the normal flow of the document</li>
        <li>relative : Element is positioned relative to its normal position</li>
        <li>absolute : Element is positioned relative to its first positioned (not static) ancestor element</li>
        <li>fixed : Element is positioned relative to the viewport, which means it always stays in the same place even if the page is scrolled</li>
        <li>sticky : Element is positioned based on the user's scroll position</li>
    </ol>

    <hr>
    Semantic Tags
    <br>

    <ol>
        <li>header : Defines a header for a document or a section
            <ol>
                <li>nav : Defines navigation links</li>
            </ol>
        </li>
        <li>main : Specifies the main content of a document
            <ol>
                <li>section : Defines a section in a document
                    <ol>
                        <li>article : Defines an article</li>
                    </ol>
                </li>
                <li>aside : Defines content aside from the content (like a sidebar)</li>
            </ol>
        </li>
        <li>footer : Defines a footer for a document or a section</li>
    </ol>
    Semenatic tag vs Non Semenatic tag
    <br>
    Semenatic : Clearly describes its meaning to both the browser and the developer ,enhances SEO and SCREEN READERs
    <br>
    Non Semenatic : Does not clearly describes its content to the browser and the developer
    
</body>
</html>
```
- style.css
```
#ID0{font-size: x-large; color: aliceblue;}
```