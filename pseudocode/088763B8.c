/* Entry 0x088763B8 | file offset 0x00073390 | FUN_088763b8 | bytes 636 */

void FUN_088763b8(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = FUN_089a04e8();
  FUN_089a03dc(7);
  FUN_089a03dc(10);
  FUN_089a03dc(0);
  FUN_089a03dc(1);
  FUN_089a119c(1);
  FUN_089a0e20(0,1);
  FUN_089a0384(9);
  FUN_089a03dc(4);
  iVar2 = sceGeEdramGetAddr();
  iVar2 = DAT_09afee54 + iVar2;
  FUN_089a001c(0x3f800000,0x3f800000);
  FUN_089a0f84(0,0);
  FUN_089a0f04(0,0x200,0x200,0x200,iVar2);
  FUN_089a0db8(1,0,0,0);
  FUN_089a0e60(1,1);
  FUN_089a0fc8();
  FUN_089a02e0(1,DAT_09afee54,0x200);
  FUN_089a0c8c(0xffffffff);
  FUN_089a0930(0x78,0x110,0x3c,0x88);
  iVar4 = 0;
  iVar3 = 0;
  iVar2 = 0;
  do {
    FUN_089a094c(iVar3,0,0,iVar2,0,0,0);
    iVar4 = iVar4 + 1;
    iVar3 = iVar3 + 0x3c;
    iVar2 = iVar2 + 0x78;
  } while (iVar4 < 4);
  FUN_08866ae0(DAT_089d5ec0);
  FUN_089a0384(0x11);
  FUN_089a10f4(3,0,0xffffff);
  FUN_089a0384(4);
  FUN_089a12a4(2,10,10,0x3f3f3f,0xffffff);
  FUN_089a0384(3);
  FUN_089a123c(3,0x80,0x80);
  FUN_089a0c8c(0xffffffff);
  FUN_089a0930(0x3c,0x88,0x78,0x110);
  iVar4 = 0;
  iVar3 = 0;
  iVar2 = 0;
  do {
    FUN_089a094c((int)(iVar3 + ((uint)(iVar3 >> 2) >> 0x1e)) >> 2,0,0,iVar2,0,0,0);
    iVar4 = iVar4 + 1;
    iVar3 = iVar3 + 0x1e0;
    iVar2 = iVar2 + 0x3c;
  } while (iVar4 < 4);
  FUN_089a119c(0);
  FUN_0899fdc4(uVar1);
  FUN_089a0e60(0,0);
  FUN_089a12a4(0,2,3,0,0);
  FUN_089a123c(1,0x80,0x80);
  FUN_089a03dc(3);
  return;
}

