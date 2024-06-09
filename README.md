# Rancang Bangun Alat Pendeteksi Kebisingan Berbasis Sensor untuk Analisis Lingkungan Suara
  
![image](https://github.com/Renoadith/Projek-Mikrokontroller/assets/134272498/81d349ff-dd06-41c8-86f4-5995eabd1553)  

https://github.com/Renoadith/Projek-Mikrokontroller/assets/134272498/ef301c9a-c806-4f26-9cb7-10bee5172634
  
Proyek ini bertujuan mengembangkan alat pendeteksi kebisingan berbasis sensor untuk menganalisis lingkungan suara secara efektif. Menggunakan sensor suara KY-037, alat ini mendeteksi kebisingan dan memberikan peringatan audio ketika kebisingan melebihi ambang batas yang ditentukan. Data dari sensor diolah oleh mikrokontroler Arduino Uno, yang menghasilkan output berupa suara peringatan melalui buzzer. Alat ini cocok untuk lingkungan yang memerlukan ketenangan, seperti perpustakaan, ruang belajar, atau ruang kerja, dan dirancang untuk ditempatkan di setiap sudut ruangan atau kelompok meja agar dapat memantau seluruh area. Proyek ini merupakan bagian dari mata kuliah workshop mikrokontroler yang dikerjakan oleh mahasiswa Teknik Elektronika Politeknik Elektronika Negeri Surabaya (PENS), yang mengaplikasikan pengetahuan praktis dalam mikrokontroler dan sensor untuk menciptakan solusi teknis nyata, menjadikan lingkungan lebih nyaman dan produktif.
  
## Desain 3D
 
![image](https://github.com/Renoadith/Projek-Mikrokontroller/assets/168979944/49b72631-4169-4363-a4f5-2f5868484604)
![image](https://github.com/Renoadith/Projek-Mikrokontroller/assets/168979944/a25a9c53-3324-40b0-a35b-9acb642eea06)
![image](https://github.com/Renoadith/Projek-Mikrokontroller/assets/168979944/0af3ba8b-6d2c-47d8-b7cf-e3afe879404c)
![image](https://github.com/Renoadith/Projek-Mikrokontroller/assets/168979944/ee1e3859-b8b6-4b1e-9edf-ab9528a42f78)
![image](https://github.com/Renoadith/Projek-Mikrokontroller/blob/0e8d3b9023945dfbeb9ea2a4163f9e18a05f2541/dokumentasi/WhatsApp%20Image%202024-06-03%20at%204.33.31%20PM.jpeg)
  
Desain 3D di atas merupakan gambaran akhir alat yang mencakup ukuran, posisi komponen, dan file perangkat lunak untuk pencetakan 3D. Desain ini dibuat menggunakan Fusion 360 karena kemudahan penggunaan dan kemampuan desainer. Fusion 360 memudahkan penentuan posisi komponen dengan presisi tinggi dan menawarkan fitur simulasi serta analisis struktural, memastikan alat sesuai spesifikasi teknis. Perangkat lunak ini juga memungkinkan evaluasi kekuatan dan daya tahan alat sebelum pencetakan, mengurangi risiko kesalahan dan memastikan kualitas. Dengan Fusion 360, desainer dapat mengoptimalkan tata letak komponen sesuai rancangan awal. Pemilihan Fusion 360 didasarkan pada efisiensi dan kemampuan desainer, membuat proses desain lebih cepat dan akurat. Desain akhir diekspor dalam format kompatibel dengan berbagai printer 3D, memastikan pencetakan mudah dan cepat. Penggunaan Fusion 360 memastikan desain 3D alat ini akurat, optimal, dan mendukung kelancaran proses produksi.
  
Link desain 3D (bagian dalam) ==> <a href="Desain/bagian dalam.stl">File desain 3D (bagian dalam)</a>  
Link desain 3D (bagian luar) ==> <a href="Desain/bagian luar.stl">File desain 3D (bagian luar)</a>  
Link video tutorial desain 3D ==> <a href="https://youtu.be/fg9aguebhW4?si=BZ69bgbV-qRVRXbO">Video desain 3D</a>  
Link Thingiverse ==> <a href="https://www.thingiverse.com/thing:6647773">File Thingiverse</a>

---
## List Komponen  

![image](https://github.com/Renoadith/Projek-Mikrokontroller/assets/168979944/1b45c8dd-c293-4c40-a764-dd1ea6921e0d)
  
1. Hardware  
   a. Arduino UNO  
   b. Sensor suara KY-037  
   c. Speaker subwoofer   
   d. LCD 16x2 + i2C  
   e. LED 5mm  
   f. GF1002-PAM8403 Stereo Audio Amplifier Module
   
3. Software  
   a. Arduino ide  
   b. HxD
   d. Audacity  
   e. Inventor  
   f. Eagle  
   g. Visual Studio Code (VSC) 
   
5. Alat  
   a. Solder  
   b. Timah solder  
   c. Kabel jumper  
   d. Breadboard  
   e. Obeng  
---
## Blok Diagram  
![image](https://github.com/Renoadith/Projek-Mikrokontroller/assets/168974067/044f7e2e-e520-40c2-83e1-b7b0f8205fd9)  
Berikut adalah cara kerja sistem dari alat pendeteksi kebisingan :
1. Menyambungkan sumber listrik berupa adaptor ke arduino uno agar dapat dioperasikan
2. Kemudianmenggunakan input berupa sensor Ky-037 (untuk menangkap suara)
3. Arduino uno sebagai mikrokontroler dengan penggunaan software visual studio code untuk menyesuaikan program (batas maksimal suara yang ditangkap)
4. Suara yang ditangkap oleh sensor suara (Ky-037) akan diteruskan dan diproses oleh arduino uno. Jika melewati batas maksimal dari program, output speaker, LED, dan LCD akan bekerja
5. Speaker akan menghasilkan suara bertujuan untuk mengingatkan agar mengurangi kebisingan suara
6. LED akan menyala sebagai indikator bahwa sedang terjadi kebisingan
7. modul I2C akan memroses suara yang sudah ditangkap oleh sensor Ky-037, kemudian menampilkan besarnya nilai dari suara pada LCD

---
## Rangkaian Simulasi  
![image](https://github.com/Renoadith/Projek-Mikrokontroller/assets/168974067/85ca22a6-ed74-4b18-a4ad-6116f521a506)  
  
Simulasi adalah tahap penting dalam uji coba sistem untuk memastikan semua komponen berfungsi baik sebelum implementasi nyata. Untuk proyek alat pendeteksi kebisingan ini, kami menggunakan platform web Tinkercad karena kemudahannya diakses dan gratis, memungkinkan kalian mencoba simulasi tanpa biaya. Kami menggunakan rangkaian garis besar, dengan tombol tekan sebagai input untuk menggantikan sensor suara yang tidak tersedia di simulator. Output berupa buzzer sebagai indikator suara dan LCD untuk menandakan status aktif atau tidaknya rangkaian. Tinkercad memudahkan pembuatan dan pengujian desain rangkaian secara efektif, meskipun tidak memiliki semua komponen yang diinginkan. Platform ini menyediakan alat simulasi memadai untuk memvisualisasikan fungsi rangkaian dalam kondisi nyata, membantu mengidentifikasi dan memperbaiki masalah sebelum produksi fisik. Dengan Tinkercad, kami menghemat waktu dan biaya sambil memastikan desain sesuai spesifikasi.  
  
Link web simulasi ==> <a href="https://www.tinkercad.com/things/jV3vWOUGUW2-simulasi/editel">Simulasi software</a>  
Link video simulasi ==> <a href="https://youtu.be/cqOJ23cZhoI?si=dtuSKsLPAU53A1Sa">Video simulasi software</a>  

---
## Rangkaian Skematik
![image](https://github.com/Renoadith/Projek-Mikrokontroller/assets/168974067/c88580ec-2b27-44fd-a577-7934d52eb0f1)  
![image](https://github.com/Renoadith/Projek-Mikrokontroller/assets/168974067/8d4a1f71-460a-4c50-ac2c-bce17f3a6d7a)  
![image](https://github.com/Renoadith/Projek-Mikrokontroller/assets/168974067/1ba611ad-98a0-4d11-b012-2c81b5424951)  
![image](https://github.com/Renoadith/Projek-Mikrokontroller/assets/168974067/6534751c-41b9-42c2-aa92-39730f7b03ba)  
![image](https://github.com/Renoadith/Projek-Mikrokontroller/blob/22beea1315c3989351b3b410121d68c0fc71a857/dokumentasi/PCB.jpg)
  
Perangkaian skematik pada proyek ini adalah tahap desain untuk mencetak PCB, dibuat menggunakan perangkat lunak Eagle. Pemilihan Eagle didasarkan pada kemudahan penggunaan dan keahlian desainer, serta kebiasaan penggunaan dalam perkuliahan. Eagle memungkinkan perancangan skematik dengan presisi tinggi dan memudahkan proses routing jalur PCB. Dengan antarmuka intuitif dan berbagai alat bantu desain, perangkat lunak ini memastikan semua komponen terhubung dengan benar dan layout PCB dioptimalkan untuk kinerja terbaik. Desain skematik yang dihasilkan kemudian diekspor untuk pencetakan PCB, memastikan semua jalur dan koneksi sesuai spesifikasi. Dengan Eagle, kami dapat menghasilkan desain yang efisien, akurat, dan siap untuk tahap produksi.
  
Link skematik ==> <a href="https://github.com/Renoadith/Projek-Mikrokontroller/blob/main/Schematik/Alat%20pendeteksi%20kebisingan.sch">File skematik</a>  
Link board ==> <a href="https://github.com/Renoadith/Projek-Mikrokontroller/blob/main/Schematik/Alat%20pendeteksi%20kebisingan.brd">File board</a>  
Link video tutorial skematik ==> <a href="https://youtu.be/qFakJmJQMaU?feature=shared">Video skematik</a>  

---
## Sistem Audio dan Program

![image](https://github.com/Renoadith/Projek-Mikrokontroller/assets/168974067/0296e684-a40e-4c52-bc1d-ec648f013351)  
![image](https://github.com/Renoadith/Projek-Mikrokontroller/assets/168974067/a889883a-2f31-44ec-94b8-14c6c4e7ded7)
![image](https://github.com/Renoadith/Projek-Mikrokontroller/assets/168974067/31788840-6017-4436-a93f-9abfd1e0c013)
![image](https://github.com/Renoadith/Projek-Mikrokontroller/assets/168974067/fb3e670c-983c-4cfe-8e1b-df53758e2d61)
  
Perangkaian skematik pada proyek ini dirancang untuk mencetak PCB menggunakan perangkat lunak Eagle. Eagle dipilih karena kemudahan penggunaan dan keahlian desainer dalam perangkat lunak ini. Perangkat lunak ini memungkinkan perancangan skematik dengan presisi tinggi dan memudahkan routing jalur PCB. Desain yang dihasilkan memastikan semua komponen terhubung dengan benar dan layout PCB dioptimalkan. Hasil desain kemudian diekspor untuk pencetakan PCB, memastikan jalur dan koneksi sesuai spesifikasi. Dengan Eagle, desain yang efisien dan akurat siap untuk tahap produksi.
  
Link audio (Audacity) ==> <a href="https://github.com/Renoadith/Projek-Mikrokontroller/blob/main/Program/AUDIO%20rekam">File audio</a>  
Link audio (HxD) ==> <a href="https://github.com/Renoadith/Projek-Mikrokontroller/blob/main/Program/AUDIO%20rekam.raw">File audio</a>  
Link video tutorial audio ==> <a href="https://youtu.be/W0XZ7WrG6vU">Video audio</a>  

---
## Proses Pengerjaan  
Berikut adalah prosesdur pengerjaan dari proyek alat pendeteksi kebisingan :  
#### 1.  Simulasi Perangkat Lunak:  
Melakukan simulasi rangkaian menggunakan Tinkercad untuk memastikan semua komponen berfungsi dengan baik sebelum implementasi nyata.  

  
#### 2. Pembuatan Desain 3D:  
Menggunakan Fusion 360 untuk membuat desain 3D alat, mencakup ukuran, posisi komponen, dan file perangkat lunak untuk pencetakan 3D.  

  
#### 3. Perancangan Skematik PCB:  
Membuat desain skematik PCB menggunakan perangkat lunak Eagle, memastikan semua komponen terhubung dengan benar dan jalur dioptimalkan.  

  
#### 4. Pencetakan PCB:  
Mengekspor desain skematik untuk pencetakan PCB, memastikan semua jalur dan koneksi sesuai dengan spesifikasi.  

  
#### 5. Pengumpulan Semua Komponen:  
Mengumpulkan semua komponen elektronik yang diperlukan berdasarkan desain skematik yang telah dibuat.  

  
#### 6. Soldering Komponen:  
Melakukan penyolderan komponen pada PCB yang telah dicetak sesuai dengan desain skematik.  

  
#### 7. Rekaman dan Pengeditan Audio:  
Merekam dan mengedit audio menggunakan Audacity dan HxD untuk membuat peringatan berbasis audio yang akan digunakan oleh alat.  

  
#### 8.Uji Coba Alat:  
Menguji alat secara menyeluruh untuk memastikan semua komponen bekerja sesuai rencana dan alat berfungsi dengan baik dalam mendeteksi kebisingan.  

  
#### 9. Evaluasi dan Finishing:  
Mengevaluasi kinerja alat, melakukan penyesuaian dan perbaikan jika diperlukan, dan menyelesaikan tahap akhir pengembangan alat.  

  
#### 10. Demonstrasi Alat:  
Melakukan demonstrasi alat kepada pihak terkait, menunjukkan fungsionalitas dan efektivitas alat pendeteksi kebisingan.  

  
**Dengan mengikuti prosedur ini, proyek dapat diselesaikan secara sistematis dan efisien, memastikan setiap tahap dilakukan dengan cermat dan hasil akhirnya berkualitas tinggi.**

---

## Dokumentasi

#### MEKANIK
![image](https://github.com/Renoadith/Projek-Mikrokontroller/assets/134272498/36655439-3542-4fa3-a202-5d4808781961)

#### PERAKITAN
![image](https://github.com/Renoadith/Projek-Mikrokontroller/assets/134272498/07fcd489-b062-4423-ad67-18b8ef51b040)

#### PROGRAM
![image](https://github.com/Renoadith/Projek-Mikrokontroller/assets/134272498/a46f1dc0-c522-45f4-8f2b-67e0cfc6f79f)  

#### DEMO VIDEO IKLAN 
https://github.com/Renoadith/Projek-Mikrokontroller/assets/168974067/a5bf39f3-afec-4e52-a946-437841fa6f4a  

Link lebih jelas ==> <a href="https://youtu.be/7oVi07qgA7E?si=QuQN2IhZiEXbEfBq">Video iklan</a>

---

## Flayer

![image](https://github.com/Renoadith/Projek-Mikrokontroller/blob/561b6ec2f84b6a9fe761c6ef16c30d173051581d/Desain/Flayer.jpeg)  
  
Link penjelasan lebih lengkap ==> <a href="https://youtu.be/Oe4GmpdsbrU">Video presentasi</a>
