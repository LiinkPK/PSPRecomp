/* Entry 0x0890C05C | file offset 0x00109034 | FUN_0890c05c | bytes 152 */

void FUN_0890c05c(undefined4 *param_1,uint param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  if (param_1 != (undefined4 *)0x0) {
    param_1[1] = &DAT_089cdf18;
    iVar2 = 0;
    puVar1 = param_1;
    do {
      FUN_0885c538(*param_1,puVar1[4],0);
      iVar2 = iVar2 + 1;
      puVar1 = puVar1 + 4;
    } while (iVar2 < 0x10);
    FUN_0890b758(param_1,0);
    if ((param_2 & 1) != 0) {
      FUN_08992f04(param_1);
    }
  }
  return;
}

