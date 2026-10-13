/* Entry 0x088875B8 | file offset 0x00084590 | FUN_088875b8 | bytes 240 */

void FUN_088875b8(int *param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                 int param_7,int param_8)

{
  bool bVar1;
  short *psVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  
  iVar7 = 0;
  iVar8 = *(int *)(DAT_089d7350 + 8);
  *param_1 = 0;
  if (0 < iVar8) {
    iVar5 = 0;
    do {
      bVar1 = false;
      psVar2 = (short *)(DAT_089d7354 + iVar5);
      iVar3 = 0;
      do {
        if (*psVar2 == param_2) {
          *param_1 = iVar7;
          bVar1 = true;
          break;
        }
        iVar3 = iVar3 + 1;
        psVar2 = psVar2 + 1;
      } while (iVar3 < 3);
      if (bVar1) break;
      iVar7 = iVar7 + 1;
      iVar5 = iVar5 + 8;
    } while (iVar7 < iVar8);
  }
  iVar7 = 0;
  iVar8 = 0xef;
  do {
    uVar4 = *(undefined4 *)((int)&DAT_09afb8a4 + iVar7);
    puVar6 = (undefined4 *)((int)param_1 + iVar7 + 0x24);
    *puVar6 = *(undefined4 *)((int)&DAT_09afb8a0 + iVar7);
    puVar6[1] = uVar4;
    iVar8 = iVar8 + -1;
    iVar7 = iVar7 + 8;
  } while (iVar8 != 0);
  param_1[0x1e7] = param_7;
  param_1[0x1e8] = param_8;
  param_1[1] = 0;
  param_1[2] = param_3;
  param_1[3] = param_4;
  param_1[4] = param_5;
  param_1[5] = param_6;
  *(undefined1 *)(param_1 + 6) = 1;
  return;
}

