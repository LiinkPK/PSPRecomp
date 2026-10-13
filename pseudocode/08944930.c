/* Entry 0x08944930 | file offset 0x00141908 | FUN_08944930 | bytes 624 */

void FUN_08944930(int param_1,char *param_2,uint *param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  uVar2 = *param_3;
  if (*param_2 == 'l') {
    iVar4 = 0;
    iVar3 = 0;
    if (*(short *)(param_2 + 4) != 0) {
      do {
        if (*(int *)(*(int *)(param_2 + 0x30) + iVar3) != 0) {
          FUN_08944930(param_1,*(int *)(*(int *)(param_2 + 0x30) + iVar3),param_3);
        }
        iVar4 = iVar4 + 1;
        iVar3 = iVar3 + 4;
      } while (iVar4 < (int)(uint)*(ushort *)(param_2 + 4));
    }
  }
  else {
    if ((uVar2 & 0x20) != 0) {
      param_2[0x1d8] = (char)param_3[2];
    }
    if ((uVar2 & 1) != 0) {
      if (*(byte *)(param_1 + 0x84) == 0) {
        puVar1 = (undefined4 *)param_3[4];
        uVar5 = puVar1[1];
        uVar7 = puVar1[2];
        uVar6 = puVar1[3];
        *(undefined4 *)(param_2 + 0x90) = *puVar1;
        *(undefined4 *)(param_2 + 0x94) = uVar5;
        *(undefined4 *)(param_2 + 0x98) = uVar7;
        *(undefined4 *)(param_2 + 0x9c) = uVar6;
      }
      else if (*(byte *)(param_1 + 0x84) < 2) {
        puVar1 = (undefined4 *)param_3[4];
        uVar5 = puVar1[1];
        uVar7 = puVar1[2];
        uVar6 = puVar1[3];
        *(undefined4 *)(param_2 + 0x90) = *puVar1;
        *(undefined4 *)(param_2 + 0x94) = uVar5;
        *(undefined4 *)(param_2 + 0x98) = uVar7;
        *(undefined4 *)(param_2 + 0x9c) = uVar6;
      }
    }
    if ((uVar2 & 2) != 0) {
      puVar1 = (undefined4 *)param_3[5];
      uVar5 = puVar1[1];
      uVar7 = puVar1[2];
      uVar6 = puVar1[3];
      *(undefined4 *)(param_2 + 0xa0) = *puVar1;
      *(undefined4 *)(param_2 + 0xa4) = uVar5;
      *(undefined4 *)(param_2 + 0xa8) = uVar7;
      *(undefined4 *)(param_2 + 0xac) = uVar6;
    }
    if ((uVar2 & 4) != 0) {
      puVar1 = (undefined4 *)param_3[6];
      uVar5 = puVar1[1];
      uVar7 = puVar1[2];
      uVar6 = puVar1[3];
      *(undefined4 *)(param_2 + 0xb0) = *puVar1;
      *(undefined4 *)(param_2 + 0xb4) = uVar5;
      *(undefined4 *)(param_2 + 0xb8) = uVar7;
      *(undefined4 *)(param_2 + 0xbc) = uVar6;
    }
    if ((uVar2 & 8) != 0) {
      puVar1 = (undefined4 *)param_3[7];
      uVar5 = puVar1[1];
      uVar7 = puVar1[2];
      uVar6 = puVar1[3];
      *(undefined4 *)(param_2 + 0xc0) = *puVar1;
      *(undefined4 *)(param_2 + 0xc4) = uVar5;
      *(undefined4 *)(param_2 + 200) = uVar7;
      *(undefined4 *)(param_2 + 0xcc) = uVar6;
    }
    if ((uVar2 & 0x10) != 0) {
      FUN_08935524(param_2 + 0xd0,param_3[8],0x40);
    }
    if ((uVar2 & 0x100) != 0) {
      FUN_08935524(param_2 + 0x110,param_3[9],0x40);
    }
  }
  return;
}

