-- phpMyAdmin SQL Dump
-- version 5.2.0
-- https://www.phpmyadmin.net/
--
-- Host: 127.0.0.1
-- Waktu pembuatan: 29 Jul 2023 pada 05.53
-- Versi server: 10.4.27-MariaDB
-- Versi PHP: 8.2.0

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
START TRANSACTION;
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- Database: `gadgetstoreid`
--

-- --------------------------------------------------------

--
-- Struktur dari tabel `data_gadget`
--

CREATE TABLE `DataRumah` (
  `idRumah` int(40) NOT NULL,
  `namaRumah` varchar(200) NOT NULL,
  `hargaRumah` int(255) NOT NULL,
  `stokRumah` int(13) NOT NULL,
  `deskRumah` varchar(1000) NOT NULL,
  `jenisRumah` varchar(10) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;


-- --------------------------------------------------------

--
-- Struktur dari tabel `data_user`
--

CREATE TABLE `DataUser` (
  `idUser` int(8) NOT NULL,
  `Username` varchar(10) NOT NULL,
  `noHp` varchar(15) DEFAULT NULL,
  `alamatUser` varchar(200) DEFAULT NULL,
  `Password` varchar(12) NOT NULL,
  `idRefference` int(1) DEFAULT NULL,
  `Email` varchar(100) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

-- --------------------------------------------------------

--
-- Struktur dari tabel `role`
--

CREATE TABLE `Refference` (
  `idRefference` int(1) NOT NULL,
  `namaRefference` varchar(20) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;


-- --------------------------------------------------------

--
-- Struktur dari tabel `transaksi`
--

CREATE TABLE `transaksi` (
  `idTransaksi` int(10) NOT NULL,
  `idUser` int(8) NOT NULL,
  `idRumah` int(40) NOT NULL,
  `jumlah` int(255) NOT NULL,
  `total` int(255) NOT NULL,
  `tanggal` date NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Indexes for dumped tables
--

--
-- Indeks untuk tabel `data_gadget`
--
ALTER TABLE `DataRumah`
  ADD PRIMARY KEY (`idRumah`);

--
-- Indeks untuk tabel `data_user`
--
ALTER TABLE `DataUser`
  ADD PRIMARY KEY (`idUser`),
  ADD KEY `fk4` (`idRefference`);

--
-- Indeks untuk tabel `role`
--
ALTER TABLE `Refference`
  ADD PRIMARY KEY (`idRefference`);

--
-- Indeks untuk tabel `transaksi`
--
ALTER TABLE `transaksi`
  ADD PRIMARY KEY (`idTransaksi`),
  ADD KEY `t1` (`idRumah`),
  ADD KEY `t2` (`idUser`);

--
-- AUTO_INCREMENT untuk tabel yang dibuang
--

--
-- AUTO_INCREMENT untuk tabel `data_gadget`
--
ALTER TABLE `DataRumah`
  MODIFY `idRumah` int(40) NOT NULL AUTO_INCREMENT;

--
-- AUTO_INCREMENT untuk tabel `data_user`
--
ALTER TABLE `DataUser`
  MODIFY `idUser` int(8) NOT NULL AUTO_INCREMENT;

--
-- AUTO_INCREMENT untuk tabel `transaksi`
--
ALTER TABLE `transaksi`
  MODIFY `idTransaksi` int(10) NOT NULL AUTO_INCREMENT;

--
-- Ketidakleluasaan untuk tabel pelimpahan (Dumped Tables)
--

--
-- Ketidakleluasaan untuk tabel `data_user`
--
ALTER TABLE `data_user`
  ADD CONSTRAINT `fk4` FOREIGN KEY (`idRefference`) REFERENCES `Refference` (`idRefference`);

--
-- Ketidakleluasaan untuk tabel `transaksi`
--
ALTER TABLE `transaksi`
  ADD CONSTRAINT `t1` FOREIGN KEY (`idRumah`) REFERENCES `DataRumah` (`idRumah`),
  ADD CONSTRAINT `t2` FOREIGN KEY (`idUser`) REFERENCES `DataUser` (`idUser`);
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
