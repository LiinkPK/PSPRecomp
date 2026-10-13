/* Entry 0x088ED340 | file offset 0x000EA318 | FUN_088ed340 | bytes 452 */

void FUN_088ed340(void)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_089a04e8();
  FUN_089a0be4(0,0);
  FUN_089a001c(0x3f800000,0x3f800000);
  FUN_089a0f84(0,0);
  FUN_089a03dc(1);
  FUN_089a119c(1);
  FUN_089a03dc(0);
  FUN_089a0384(9);
  FUN_089a0db8(3,0,0,0);
  FUN_089a0e20(0,0);
  if (*(char *)(DAT_089d5ec0 + 0x2ccf) == '\0') {
    FUN_089a0384(6);
    iVar2 = *(int *)(DAT_089d7f00 + 0x16c) +
            *(int *)(DAT_089d7f00 + 0x178) * *(int *)(DAT_089d7f00 + 0x17c);
  }
  else {
    FUN_089a03dc(6);
    iVar2 = *(int *)(DAT_089d7f00 + 0x16c) +
            *(int *)(DAT_089d7f00 + 0x178) * *(int *)(DAT_089d7f00 + 0x17c);
  }
  FUN_089a0f04(0,0x200,0x200,0x200,iVar2);
  FUN_089a0c8c(0xffffffff);
  FUN_089a0930(0x78,0x110,0x78,0x110);
  FUN_089a0fc8();
  FUN_089a094c(0,0,0,0,0,0,0);
  FUN_089a094c(0x78,0,0,0x78,0,0,0);
  FUN_089a094c(0xf0,0,0,0xf0,0,0,0);
  FUN_089a094c(0x168,0,0,0x168,0,0,0);
  FUN_089a119c(0);
  FUN_0899fdc4(uVar1);
  return;
}

