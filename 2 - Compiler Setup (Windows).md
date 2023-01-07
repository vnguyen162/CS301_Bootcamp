# Compiler Setup (Windows)

There are several different compilers that can be used with CLion.  For the 
bootcamp we recommend the latest version of MinGW.

> **Important Note**
> 
> CLion does come with a version of MinGW pre-installed.  
> However, this version has been known to cause some issues. At the time of 
> writing this guide, we recommend installing the latest version of MinGW 
> using the following steps.

## MinGW

MinGW is a Windows version of g++ and gcc.  We use this compiler as it 
closely matches the compiler linux typically uses.

## Download and Extract the Latest Version of MinGW

* Go to https://winlibs.com/

* Download the latest Zip

  ![img_2.png](_md_images/mingw_download.png)

  ![img_3.png](_md_images/downloaded_mingw.png)

* Unzip the file into a known folder.   I suggest placing it directly into your main C: drive.
After that, you should see the mingw64 folder in your C: drive.

  ![img_4.png](_md_images/mingw_cdrive.png)

## Configure CLion to use MinGW
* Click **"File" &rarr; "Settings"**, 

  ![img_5.png](_md_images/file_settings.png)

* Click the **"Build, Execution, Deployment" &rarr; "Toolchains"**

    ![img.png](_md_images/toolchains.png)

* Click the **"+"**. You should be able to add the MinGW option.

  ![img_6.png](_md_images/toolchain_add.png) ![img_7.png](_md_images/toolchain_mingw_setting.png)

* Under "Toolset", click the folder icon and find the location of your mingw64 
folder.

  ![img_10.png](_md_images/mingw_folder.png)

  ![img_11.png](_md_images/mingw_nav_folder.png)

* Provide a name for the compiler setting.  Make sure the name is not 
  already used. Here I used "MinGW (Latest)" so it would not conflict with 
  the other versions of MinGW I have installed.

  ![img_12.png](_md_images/mingw_naming.png)

* Use the arrows (if needed), to move the MinGW toolchain you created to the 
  top default location.

  ![img_13.png](_md_images/mingw_default.png)

* Make sure you hit "Apply" when you are done.

  ![img_14.png](_md_images/mingw_apply.png)