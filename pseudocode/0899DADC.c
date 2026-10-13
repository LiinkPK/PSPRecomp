/* Entry 0x0899DADC | file offset 0x0019AAB4 | FUN_0899dadc | bytes 152 */

void FUN_0899dadc(undefined1 *param_1,undefined1 *param_2,int param_3,int param_4,byte param_5)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined1 *puVar4;
  uint uVar5;
  
  uVar5 = param_3 * 4 + 0xfU & 0xfffffff0;
  puVar4 = param_1 + uVar5 * (param_4 + -1);
  if (param_4 < 0) {
    param_4 = -param_4;
    uVar5 = -uVar5;
    puVar4 = param_1;
  }
  if (0 < param_4) {
    do {
      puVar1 = puVar4;
      puVar2 = param_2;
      iVar3 = param_3;
      if (0 < param_3) {
        do {
          iVar3 = iVar3 + -1;
          *puVar1 = puVar2[2];
          puVar1[1] = puVar2[1];
          puVar1[2] = *puVar2;
          puVar1[3] = puVar2[3] | param_5;
          puVar1 = puVar1 + 4;
          puVar2 = puVar2 + 4;
        } while (iVar3 != 0);
      }
      param_4 = param_4 + -1;
      param_2 = param_2 + param_3 * 4;
      puVar4 = puVar4 + -uVar5;
    } while (param_4 != 0);
  }
  return;
}

