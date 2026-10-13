/* Entry 0x088AB800 | file offset 0x000A87D8 | FUN_088ab800 | bytes 504 */

void FUN_088ab800(int param_1,char param_2)

{
  int iVar1;
  
  if (param_2 != '\0') {
    *(undefined1 *)(param_1 + 0xec0) = 0;
  }
  FUN_088abe28(param_1);
  *(undefined4 *)(param_1 + 0x25c) = 0x3ecc8;
  FUN_08935828(param_1 + 0xf08,0,0x3ecc8);
  *(undefined4 *)(param_1 + 0xf08) = 10;
  *(undefined4 *)(param_1 + 0xf0c) = 0x3ecc8;
  *(undefined4 *)(param_1 + 0xf10) = 0x1ceac;
  *(undefined4 *)(param_1 + 0xf14) = 0x80;
  *(undefined4 *)(param_1 + 0xf18) = 0x104;
  *(undefined4 *)(param_1 + 0xf1c) = 0x280;
  *(undefined4 *)(param_1 + 0xf20) = 0x1bd0;
  *(undefined4 *)(param_1 + 0xf24) = 0x1a160;
  *(undefined4 *)(param_1 + 0xf28) = 0x1864;
  *(undefined4 *)(param_1 + 0xf2c) = 8;
  *(undefined4 *)(param_1 + 0xf30) = 0x290c;
  *(undefined4 *)(param_1 + 0xf34) = 0x6a8;
  *(undefined4 *)(param_1 + 0xf38) = 0x16c;
  *(undefined4 *)(param_1 + 0xf3c) = 0xc80;
  *(undefined4 *)(param_1 + 0xf40) = 0xb4;
  *(undefined4 *)(param_1 + 0xf44) = 0x590;
  FUN_088b0788();
  FUN_088cb210(param_1 + 0xf58);
  FUN_088f0734();
  FUN_088f2254();
  FUN_088f43dc();
  FUN_088f2cf8(param_1 + 0x1e208);
  FUN_088f5870(param_1 + 0x1fdd8);
  FUN_088c7690(param_1 + 0x39f38);
  FUN_08902734(param_1 + 0x3b7a4);
  FUN_0892a514(param_1 + 0x3e0b0);
  FUN_0892a8b8(param_1 + 0x3e758);
  FUN_08912b5c(param_1 + 0x3e8c8);
  FUN_08920074(param_1 + 0x3f548);
  FUN_08920884(param_1 + 0x3f63c);
  iVar1 = FUN_0885c304(DAT_089d4e14);
  if (iVar1 == 1) {
    *DAT_089d726c = *DAT_089d726c | 0x2000000;
  }
  else {
    *DAT_089d726c = *DAT_089d726c & 0xfdffffff;
  }
  if (DAT_089d5f20 != '\0') {
    FUN_088ba34c();
  }
  return;
}

