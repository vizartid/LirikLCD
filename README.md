# Proyek Arduino: Lirik Lagu di LCD 16x2

Sebuah proyek Arduino sederhana untuk menampilkan lirik lagu "Tante Culik Aku Dong" secara sinkron di layar LCD I2C 16x2. Proyek ini sangat cocok untuk dibuat konten video atau sekadar hobi elektronika.



---

## ✨ Fitur

* **Tampilan Lirik Sinkron**: Waktu tunda (`delay`) pada kode sudah disesuaikan agar cocok dengan ritme lagu aslinya.
* **Wiring Minimalis**: Menggunakan modul I2C pada LCD sehingga hanya membutuhkan 4 kabel (VCC, GND, SDA, SCL).
* **Loop Kontinu**: Lirik akan terus berputar dari awal hingga akhir, ideal untuk ditampilkan secara berulang.
* **Mudah Dimodifikasi**: Anda bisa dengan mudah mengubah teks lirik atau waktu tunda sesuai kreativitas.

---

## 🛠️ Komponen yang Dibutuhkan

### Hardware
* 1x Arduino Uno (atau board lain yang kompatibel)
* 1x LCD 16x2 dengan modul I2C yang sudah tersolder
* 4x Kabel Jumper (male-to-female atau male-to-male)
* 1x Breadboard (opsional, untuk kerapian)

### Software
* **Arduino IDE**: Pastikan sudah ter-install di komputer Anda.
* **Library `LiquidCrystal_I2C`**:
    * Buka Arduino IDE.
    * Pilih **Sketch > Include Library > Manage Libraries...**
    * Di kotak pencarian, ketik `LiquidCrystal_I2C`.
    * Cari library oleh **Frank de Brabander** dan klik **Install**.

---

## 🔌 Diagram Koneksi

Hubungkan pin dari modul I2C LCD ke pin Arduino Uno sebagai berikut:

| Pin Modul I2C | Pin Arduino Uno |
| :------------ | :-------------- |
| **GND** | `GND`           |
| **VCC** | `5V`            |
| **SDA** | `A4`            |
| **SCL** | `A5`            |

**Catatan Penting:** Jika layar tidak menampilkan apa pun setelah kode di-upload, coba putar potensiometer biru di belakang modul I2C untuk mengatur kontras. Jika masih tidak muncul, pastikan alamat I2C Anda benar (biasanya `0x27` atau `0x3F`).

---

## 🚀 Instalasi & Penggunaan

1.  Rakit semua komponen sesuai dengan diagram koneksi di atas.
2.  Hubungkan Arduino ke komputer Anda menggunakan kabel USB.
3.  Buka Arduino IDE.
4.  Salin kode dari bawah dan tempelkan ke sketch baru.
5.  Pilih Board (**Tools > Board > Arduino Uno**) dan Port (**Tools > Port**) yang benar.
6.  Klik tombol **Upload** (ikon panah ke kanan).
7.  Layar LCD akan mulai menampilkan lirik. Putar lagu aslinya untuk melihat sinkronisasinya!

---

## 👨‍💻 Kode Utama (`LirikLCD.ino`)

```cpp
#include <Wire.h>
#include <LiquidCrystal_I2C.h>

// Sesuaikan alamat I2C (0x27 atau 0x3F) dan ukuran LCD (16x2)
LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup() {
  lcd.init();
  lcd.backlight();
}

void loop() {
  // BAGIAN 1: LIRIK AWAL
  lcd.clear();
  lcd.setCursor(3, 0);
  lcd.print("Tante...");
  delay(2000);

  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Sudah terbiasa");
  lcd.setCursor(0, 1);
  lcd.print("terjadi, tante");
  delay(3500);

  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Teman datang");
  lcd.setCursor(0, 1);
  lcd.print("ketika lagi...");
  delay(3000);

  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("...butuh saja.");
  delay(2500);

  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Coba kalau");
  lcd.setCursor(0, 1);
  lcd.print("lagi susah");
  delay(3000);

  // BAGIAN 2: REVISI SESUAI LIRIK ASLI
  
  // Durasi "menghilang" dibuat lebih panjang
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Mereka semua");
  lcd.setCursor(0, 1);
  lcd.print("menghilangggg...");
  delay(5500);

  // Lirik "Tante" disebut dua kali
  lcd.clear();
  lcd.setCursor(4, 0);
  lcd.print("Tante...");
  delay(1500);

  lcd.clear();
  lcd.setCursor(4, 0);
  lcd.print("Tante...");
  delay(2000);

  // Bagian Puncak (Punchline)
  lcd.clear();
  lcd.setCursor(2, 0);
  lcd.print("CULIK AKU,");
  lcd.setCursor(5, 1);
  lcd.print("DONG!");
  delay(5000);
}
