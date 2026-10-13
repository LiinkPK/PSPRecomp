/* Entry 0x088F526C | file offset 0x000F2244 | FUN_088f526c | bytes 392 */

undefined4 FUN_088f526c(int param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  
  iVar2 = FUN_088f56ec(param_1,param_2 + 0xc);
  if (iVar2 == 0) {
    iVar2 = *(int *)(param_1 + 0x1a068);
    if (iVar2 < 0x19) {
      iVar3 = 0;
      iVar5 = 0x215;
      do {
        uVar7 = ((undefined4 *)(param_2 + iVar3))[1];
        puVar8 = (undefined4 *)(param_1 + iVar2 * 0x10a8 + iVar3);
        *puVar8 = *(undefined4 *)(param_2 + iVar3);
        puVar8[1] = uVar7;
        iVar5 = iVar5 + -1;
        iVar3 = iVar3 + 8;
      } while (iVar5 != 0);
      *(int *)(param_1 + 0x1a068) = *(int *)(param_1 + 0x1a068) + 1;
      bVar1 = *(byte *)(param_2 + 0x27);
    }
    else {
      iVar3 = -1;
      iVar6 = 0;
      uVar4 = 0xffffffff;
      iVar5 = param_1;
      if (0 < iVar2) {
        do {
          if (((*(byte *)(iVar5 + 0x27) & 1) == 0) && (*(uint *)(iVar5 + 0x1c) < uVar4)) {
            iVar3 = iVar6;
            uVar4 = *(uint *)(iVar5 + 0x1c);
          }
          iVar6 = iVar6 + 1;
          iVar5 = iVar5 + 0x10a8;
        } while (iVar6 < iVar2);
      }
      if (iVar3 != -1) {
        iVar2 = 0;
        iVar5 = 0x215;
        do {
          uVar7 = ((undefined4 *)(param_2 + iVar2))[1];
          puVar8 = (undefined4 *)(param_1 + iVar3 * 0x10a8 + iVar2);
          *puVar8 = *(undefined4 *)(param_2 + iVar2);
          puVar8[1] = uVar7;
          iVar5 = iVar5 + -1;
          iVar2 = iVar2 + 8;
        } while (iVar5 != 0);
      }
      bVar1 = *(byte *)(param_2 + 0x27);
    }
    if ((bVar1 & 4) != 0) {
      FUN_088cc440((int)*(short *)(param_2 + 0x24));
    }
    uVar7 = 1;
  }
  else {
    uVar7 = 0;
  }
  return uVar7;
}

