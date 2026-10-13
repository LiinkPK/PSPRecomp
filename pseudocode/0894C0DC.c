/* Entry 0x0894C0DC | file offset 0x001490B4 | FUN_0894c0dc | bytes 360 */

int FUN_0894c0dc(float param_1,undefined4 param_2,int param_3,uint param_4,int *param_5,
                undefined4 *param_6)

{
  ushort *puVar1;
  int iVar2;
  short *psVar3;
  int iVar4;
  ushort *puVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  
  iVar8 = 0;
  puVar5 = (ushort *)0x0;
  iVar2 = 0;
  iVar4 = 0;
  if (*(byte *)(param_3 + 0x13) != 0) {
    puVar7 = *(undefined4 **)(param_3 + 0x24);
    do {
      psVar3 = (short *)*puVar7;
      if (param_1 < (float)(int)*psVar3) break;
      iVar6 = 0;
      if (0 < *(int *)(psVar3 + 2)) {
        puVar1 = *(ushort **)(psVar3 + 4);
        do {
          puVar5 = puVar1;
          if (**(ushort **)(*(int *)(param_3 + 0x1c) + (uint)*puVar5 * 4) == param_4) {
            iVar2 = (int)psVar3 + (uint)puVar5[1];
            iVar4 = iVar8;
            break;
          }
          iVar6 = iVar6 + 1;
          puVar1 = puVar5 + 4;
        } while (iVar6 < *(int *)(psVar3 + 2));
      }
      iVar8 = iVar8 + 1;
      puVar7 = puVar7 + 1;
    } while (iVar8 < (int)(uint)*(byte *)(param_3 + 0x13));
  }
  if (iVar2 == 0) {
    iVar8 = *(int *)(param_3 + 0x20);
    iVar6 = 0;
    iVar4 = 0;
    if (0 < *(int *)(iVar8 + 4)) {
      puVar1 = *(ushort **)(iVar8 + 8);
      do {
        puVar5 = puVar1;
        if (**(ushort **)(*(int *)(param_3 + 0x1c) + (uint)*puVar5 * 4) == param_4) {
          if (puVar5[1] == 0xffff) {
            iVar2 = 0;
          }
          else {
            iVar2 = iVar8 + (uint)puVar5[1];
          }
          break;
        }
        iVar6 = iVar6 + 1;
        puVar1 = puVar5 + 4;
      } while (iVar6 < *(int *)(iVar8 + 4));
    }
  }
  if (param_5 != (int *)0x0) {
    *param_5 = iVar4;
  }
  if (param_6 != (undefined4 *)0x0) {
    *param_6 = puVar5;
  }
  return iVar2;
}

