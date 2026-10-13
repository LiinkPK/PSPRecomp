/* Entry 0x0899DA38 | file offset 0x0019AA10 | FUN_0899da38 | bytes 164 */

void FUN_0899da38(undefined1 *param_1,undefined1 *param_2,int param_3,int param_4)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined1 *puVar5;
  uint uVar6;
  
  uVar6 = param_3 * 4 + 0xfU & 0xfffffff0;
  puVar5 = param_1 + uVar6 * (param_4 + -1);
  if (param_4 < 0) {
    param_4 = -param_4;
    uVar6 = -uVar6;
    puVar5 = param_1;
  }
  if (0 < param_4) {
    do {
      puVar2 = puVar5;
      puVar3 = param_2;
      iVar4 = param_3;
      if (0 < param_3) {
        do {
          iVar4 = iVar4 + -1;
          *puVar2 = puVar3[2];
          puVar2[1] = puVar3[1];
          uVar1 = *puVar3;
          puVar2[3] = 0xff;
          puVar2[2] = uVar1;
          puVar2 = puVar2 + 4;
          puVar3 = puVar3 + 3;
        } while (iVar4 != 0);
      }
      param_4 = param_4 + -1;
      param_2 = param_2 + (param_3 * 3 + 3U & 0xfffffffc);
      puVar5 = puVar5 + -uVar6;
    } while (param_4 != 0);
  }
  return;
}

