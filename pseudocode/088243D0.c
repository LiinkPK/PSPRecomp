/* Entry 0x088243D0 | file offset 0x000213A8 | FUN_088243d0 | bytes 292 */

void FUN_088243d0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  
  iVar4 = 0;
  iVar3 = ((*(uint *)(param_1 + 0x20) & 0x1fe0) >> 5 ^ 0x80) - 0x80;
  if (0 < iVar3) {
    iVar5 = 0;
    do {
      iVar8 = *(int *)(param_1 + 0x28) + iVar5;
      if ((*(byte *)(iVar8 + 299) & 2) == 0) {
        uVar6 = (int)*(char *)(iVar8 + 0x12a) & 0x3f;
        iVar7 = 0;
        if (uVar6 != 0) {
          iVar9 = ((int)*(char *)(iVar8 + 0x129) & 0x7fU) << 7;
          do {
            iVar1 = *(int *)(param_1 + 0x2c) + iVar9;
            iVar2 = *(int *)(iVar1 + 0x70);
            local_40 = *(undefined4 *)(iVar2 + 8);
            local_3c = *(undefined4 *)(iVar2 + 0xc);
            local_38 = *(undefined4 *)(iVar2 + 0x10);
            local_34 = 0x3f800000;
            FUN_089a3f40(iVar1,iVar8 + 0x40,&local_40);
            iVar7 = iVar7 + 1;
            iVar9 = iVar9 + 0x80;
          } while (iVar7 < (int)uVar6);
        }
      }
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + 0x130;
    } while (iVar4 < iVar3);
  }
  return;
}

