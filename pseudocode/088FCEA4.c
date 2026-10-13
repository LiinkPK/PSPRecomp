/* Entry 0x088FCEA4 | file offset 0x000F9E7C | FUN_088fcea4 | bytes 508 */

void FUN_088fcea4(int param_1)

{
  undefined2 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  
  iVar4 = *(int *)(param_1 + 0x30);
  FUN_088d4c64(iVar4 + 0x10a0,iVar4 + 0xef0,iVar4 + 0xf64,3,3,1);
  iVar5 = 0;
  iVar4 = *(int *)(param_1 + 0x30);
  iVar7 = 0;
  iVar8 = 0;
  do {
    uVar6 = *(int *)(iVar4 + 0x10b0) + iVar5;
    iVar3 = iVar4 + iVar8;
    if (*(int *)(iVar4 + 0x10ac) < (int)uVar6) {
      *(ushort *)(*(int *)(iVar3 + 0xa88) + 0x20) =
           *(ushort *)(*(int *)(iVar3 + 0xa88) + 0x20) | 0x4000;
      FUN_088d9d24();
      iVar4 = *(int *)(param_1 + 0x30);
    }
    else {
      uVar1 = *(undefined2 *)(iVar4 + uVar6 * 0x1c + 0x22);
      if (*(ushort *)(iVar4 + iVar7 + 0xf6a) != uVar6) {
        if (*(int *)(iVar3 + 0xefc) != 0) {
          FUN_0887ba5c(*(int *)(iVar3 + 0xefc));
          *(undefined4 *)(*(int *)(param_1 + 0x30) + iVar8 + 0xefc) = 0;
          iVar4 = *(int *)(param_1 + 0x30);
        }
        *(short *)(iVar4 + iVar7 + 0xf6a) = (short)uVar6;
        uVar2 = FUN_0887b3ec(*(undefined4 *)(*(int *)(param_1 + 0x30) + 0xedc),
                             *(undefined4 *)(*(int *)(param_1 + 0x30) + 0xee0),0,uVar1,0,0);
        *(undefined4 *)(*(int *)(param_1 + 0x30) + iVar8 + 0xefc) = uVar2;
        iVar4 = *(int *)(param_1 + 0x30);
        iVar3 = iVar4 + iVar8;
      }
      iVar3 = *(int *)(iVar3 + 0xa88);
      if ((*(ushort *)(iVar4 + uVar6 * 0x1c + 0x1c) & 1) == 0) {
        *(ushort *)(iVar3 + 0x20) = *(ushort *)(iVar3 + 0x20) | 0x4000;
        FUN_088d9d24();
        iVar4 = *(int *)(param_1 + 0x30);
      }
      else {
        *(ushort *)(iVar3 + 0x20) = *(ushort *)(iVar3 + 0x20) & 0xbfff;
        FUN_088d9d24();
        FUN_088fc3c4(param_1,uVar6);
        iVar4 = *(int *)(param_1 + 0x30);
      }
    }
    iVar5 = iVar5 + 1;
    iVar7 = iVar7 + 2;
    iVar8 = iVar8 + 4;
  } while (iVar5 < 9);
  FUN_088d428c(iVar4 + 0xa5c,iVar4 + 0xef0,&DAT_089ccf44,1);
  **(uint **)(param_1 + 0x30) = **(uint **)(param_1 + 0x30) | 4;
  FUN_088fbd38(param_1);
  iVar4 = *(int *)(param_1 + 0x30);
  FUN_088d4a68(iVar4 + 0x10cc,iVar4 + 0x10a0,*(undefined4 *)(iVar4 + 0xa74),
               *(undefined4 *)(iVar4 + 0xa68),0x18,0x14,0);
  return;
}

