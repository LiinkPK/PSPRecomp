/* Entry 0x089B11CC | file offset 0x001AE1A4 | FUN_089b11cc | bytes 88 */

void FUN_089b11cc(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  if (param_1 != 0) {
    if (param_2 == (undefined4 *)0x0) {
      param_2 = &DAT_089d2650;
    }
    puVar5 = param_2 + 0x10;
    puVar4 = (undefined4 *)(param_1 + 0x80);
    do {
      uVar1 = param_2[1];
      uVar2 = param_2[2];
      uVar3 = param_2[3];
      *puVar4 = *param_2;
      param_2 = param_2 + 4;
      puVar4[1] = uVar1;
      puVar4[2] = uVar2;
      puVar4[3] = uVar3;
      puVar4 = puVar4 + 4;
    } while (param_2 != puVar5);
  }
  return;
}

