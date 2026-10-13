/* Entry 0x0899D868 | file offset 0x0019A840 | FUN_0899d868 | bytes 128 */

void FUN_0899d868(undefined1 *param_1,undefined1 *param_2,int param_3,int param_4)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  uint uVar5;
  
  uVar5 = param_3 + 0xfU & 0xfffffff0;
  puVar4 = param_1 + uVar5 * (param_4 + -1);
  if (param_4 < 0) {
    param_4 = -param_4;
    uVar5 = -uVar5;
    puVar4 = param_1;
  }
  if (0 < param_4) {
    do {
      iVar1 = param_3;
      puVar2 = puVar4;
      puVar3 = param_2;
      if (0 < param_3) {
        do {
          iVar1 = iVar1 + -1;
          *puVar2 = *puVar3;
          puVar2 = puVar2 + 1;
          puVar3 = puVar3 + 1;
        } while (iVar1 != 0);
      }
      param_4 = param_4 + -1;
      param_2 = param_2 + (param_3 + 3U & 0xfffffffc);
      puVar4 = puVar4 + -uVar5;
    } while (param_4 != 0);
  }
  return;
}

