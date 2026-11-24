# PIC18F4550 SD Card Storage System

An embedded SD card storage system developed using the **PIC18F4550 microcontroller** and Embedded C.

The project focuses on implementing SPI-based communication, SD card initialization, sector-level read/write operations, and data integrity verification.

## Project Objectives

- Configure and program the PIC18F4550.
- Implement SPI communication using the MSSP peripheral.
- Initialize an SD/microSD card in SPI mode.
- Implement sector-level read and write operations.
- Verify stored data through read-back testing.
- Explore FAT filesystem integration using FatFs.
- Develop a modular and reusable embedded firmware architecture.

## System Architecture

```text
Application
    |
Filesystem (FatFs - Extension)
    |
SD Card Block Driver
    |
SD Card Protocol
    |
SPI Driver (MSSP)
    |
PIC18F4550
    |
microSD Card
```

## Hardware Requirements

- PIC18F4550 microcontroller/development board
- SPI-compatible microSD module
- microSD card
- Compatible PIC programmer/debugger
- Jumper wires and regulated power supply

Hardware specifications and connections will be finalized after inspecting the available laboratory equipment.

## Software Requirements

- MPLAB X IDE
- MPLAB XC8 Compiler
- PIC18F4550 device support
- FatFs (optional extension)

## Development Status

| Milestone | Status |
|---|---|
| Project setup | In progress |
| SPI driver | Pending |
| SD initialization | Pending |
| Sector read | Pending |
| Sector write | Pending |
| Data integrity verification | Pending |
| FatFs integration | Planned |

## Repository Structure

- `firmware/` — Embedded C source code and drivers
- `hardware/` — Hardware documentation and schematics
- `docs/` — Project documentation
- `tests/` — Module testing
- `reports/` — Academic reports

## Project Team

Developed as part of the CE-324L project at GIK Institute of Engineering Sciences and Technology.

## License

MIT License (subject to the license terms of any third-party libraries included in the repository).
