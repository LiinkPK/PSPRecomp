/* Entry 0x08818F84 | file offset 0x00015F5C | FUN_08818f84 | bytes 252 */

undefined4 FUN_08818f84(int param_1)

{
  undefined4 uVar1;
  short *psVar2;
  int iVar3;
  
  uVar1 = 0xffffffff;
  if (*(char *)(param_1 + 0xc) != '\0') {
    *(undefined4 *)(param_1 + 0x10) = 4;
    *(undefined1 *)(param_1 + 0x24) = 0;
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(undefined4 *)(param_1 + 0x2c) = 0;
    *(undefined1 *)(param_1 + 0x30) = 0;
    *(undefined4 *)(param_1 + 0x34) = 0;
    *(undefined4 *)(param_1 + 0x38) = 0;
    *(undefined4 *)(param_1 + 0x3c) = 0;
    *(undefined4 *)(param_1 + 0x40) = 0xffffffff;
    *(undefined1 *)(param_1 + 0x44) = 0;
    *(undefined1 *)(param_1 + 0x45) = 0;
    uVar1 = FUN_08899300();
    psVar2 = *(short **)(param_1 + 0x48);
    if ((psVar2 == (short *)0x0) || ((psVar2[5] & 1U) == 0)) {
      FUN_088981b4(uVar1,(int)*psVar2,1,1);
      iVar3 = *(int *)(param_1 + 0x14);
    }
    else {
      FUN_088983c8(uVar1,(int)*psVar2,0);
      iVar3 = *(int *)(param_1 + 0x14);
    }
    if (iVar3 != 0) {
      FUN_08814fa0(iVar3);
    }
    uVar1 = FUN_0881baa8();
    FUN_0881cb3c(uVar1,(int)**(short **)(param_1 + 0x48),1);
    uVar1 = 0;
  }
  return uVar1;
}

