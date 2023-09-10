-- phpMyAdmin SQL Dump
-- version 5.2.1
-- https://www.phpmyadmin.net/
--
-- Host: 127.0.0.1
-- Waktu pembuatan: 24 Jul 2023 pada 16.48
-- Versi server: 10.4.28-MariaDB
-- Versi PHP: 8.2.4

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

CREATE TABLE `data_gadget` (
  `idUnitHp` int(40) NOT NULL,
  `namaGadget` varchar(200) NOT NULL,
  `harga` int(255) NOT NULL,
  `stok` int(13) NOT NULL,
  `deskripsiProduk` varchar(1000) NOT NULL,
  `merek` varchar(10) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data untuk tabel `data_gadget`
--

INSERT INTO `data_gadget` (`idUnitHp`, `namaGadget`, `harga`, `stok`, `deskripsiProduk`, `merek`) VALUES
(1, 'REALME 3 PRO', 3000000, 50, 'Smartphone canggih', 'Realme'),
(2, 'SAMSUNG A60', 1600000, 50, 'Smartphone canggih dari korea', 'Samsung'),
(3, 'IPHONE 14 PRO', 27000000, 50, 'Smartphone crazy rich', 'Iphone');

-- --------------------------------------------------------

--
-- Struktur dari tabel `data_user`
--

CREATE TABLE `data_user` (
  `idUser` int(8) NOT NULL,
  `username` varchar(10) NOT NULL,
  `namaUser` varchar(100) NOT NULL,
  `noHp` varchar(15) NOT NULL,
  `alamatUser` varchar(200) NOT NULL,
  `password` varchar(12) NOT NULL,
  `kodeRole` int(1) NOT NULL,
  `email` varchar(100) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data untuk tabel `data_user`
--

INSERT INTO `data_user` (`idUser`, `username`, `namaUser`, `noHp`, `alamatUser`, `password`, `kodeRole`, `email`) VALUES
(1, 'goodgame', 'Evi Fitriya', '', '', 'Goodfaes', 2, ''),
(2, 'hilarius', 'Zidan', '', '', 'Goodfaes', 2, ''),
(3, 'Hipocrates', 'Mamad', '', '', 'Goodfaes', 2, '');

-- --------------------------------------------------------

--
-- Struktur dari tabel `form_feedback_produk`
--

CREATE TABLE `form_feedback_produk` (
  `idFeedback` int(5) NOT NULL,
  `idTransaksi` int(10) NOT NULL,
  `idUnitHp` int(40) NOT NULL,
  `ratingToko` varchar(10) NOT NULL,
  `ratingProduk` varchar(10) NOT NULL,
  `review` varchar(300) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

-- --------------------------------------------------------

--
-- Struktur dari tabel `role`
--

CREATE TABLE `role` (
  `kodeRole` int(1) NOT NULL,
  `namaRole` varchar(20) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data untuk tabel `role`
--

INSERT INTO `role` (`kodeRole`, `namaRole`) VALUES
(1, 'Developer'),
(2, 'User'),
(3, 'Admin');

-- --------------------------------------------------------

--
-- Struktur dari tabel `transaksi`
--

CREATE TABLE `transaksi` (
  `idTransaksi` int(10) NOT NULL,
  `idUser` int(8) NOT NULL,
  `idUnitHp` int(40) NOT NULL,
  `jumlah` int(255) NOT NULL,
  `total` int(255) NOT NULL,
  `tanggal` date NOT NULL,
  `jenisPembayaran` varchar(100) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data untuk tabel `transaksi`
--

INSERT INTO `transaksi` (`idTransaksi`, `idUser`, `idUnitHp`, `jumlah`, `total`, `tanggal`, `jenisPembayaran`) VALUES
(1, 1, 1, 4, 12000000, '2023-03-12', 'Cash'),
(2, 2, 3, 4, 108000000, '2023-03-12', 'Cash'),
(3, 3, 2, 4, 6400000, '2023-03-12', 'Cash'),
(4, 2, 3, 5, 8000000, '2023-07-07', 'Kred');

--
-- Indexes for dumped tables
--

--
-- Indeks untuk tabel `data_gadget`
--
ALTER TABLE `data_gadget`
  ADD PRIMARY KEY (`idUnitHp`);

--
-- Indeks untuk tabel `data_user`
--
ALTER TABLE `data_user`
  ADD PRIMARY KEY (`idUser`),
  ADD KEY `fk4` (`kodeRole`);

--
-- Indeks untuk tabel `form_feedback_produk`
--
ALTER TABLE `form_feedback_produk`
  ADD PRIMARY KEY (`idFeedback`),
  ADD KEY `t7` (`idTransaksi`),
  ADD KEY `j3` (`idUnitHp`);

--
-- Indeks untuk tabel `role`
--
ALTER TABLE `role`
  ADD PRIMARY KEY (`kodeRole`);

--
-- Indeks untuk tabel `transaksi`
--
ALTER TABLE `transaksi`
  ADD PRIMARY KEY (`idTransaksi`),
  ADD KEY `t1` (`idUnitHp`),
  ADD KEY `t2` (`idUser`);

--
-- AUTO_INCREMENT untuk tabel yang dibuang
--

--
-- AUTO_INCREMENT untuk tabel `data_gadget`
--
ALTER TABLE `data_gadget`
  MODIFY `idUnitHp` int(40) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=4;

--
-- AUTO_INCREMENT untuk tabel `data_user`
--
ALTER TABLE `data_user`
  MODIFY `idUser` int(8) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=4;

--
-- AUTO_INCREMENT untuk tabel `form_feedback_produk`
--
ALTER TABLE `form_feedback_produk`
  MODIFY `idFeedback` int(5) NOT NULL AUTO_INCREMENT;

--
-- AUTO_INCREMENT untuk tabel `transaksi`
--
ALTER TABLE `transaksi`
  MODIFY `idTransaksi` int(10) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=5;

--
-- Ketidakleluasaan untuk tabel pelimpahan (Dumped Tables)
--

--
-- Ketidakleluasaan untuk tabel `data_user`
--
ALTER TABLE `data_user`
  ADD CONSTRAINT `fk4` FOREIGN KEY (`kodeRole`) REFERENCES `role` (`kodeRole`);

--
-- Ketidakleluasaan untuk tabel `form_feedback_produk`
--
ALTER TABLE `form_feedback_produk`
  ADD CONSTRAINT `j3` FOREIGN KEY (`idUnitHp`) REFERENCES `data_gadget` (`idUnitHp`),
  ADD CONSTRAINT `t7` FOREIGN KEY (`idTransaksi`) REFERENCES `transaksi` (`idTransaksi`);

--
-- Ketidakleluasaan untuk tabel `transaksi`
--
ALTER TABLE `transaksi`
  ADD CONSTRAINT `t1` FOREIGN KEY (`idUnitHp`) REFERENCES `data_gadget` (`idUnitHp`),
  ADD CONSTRAINT `t2` FOREIGN KEY (`idUser`) REFERENCES `data_user` (`idUser`);
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
