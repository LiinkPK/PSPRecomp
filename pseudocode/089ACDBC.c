/* Entry 0x089ACDBC | file offset 0x001A9D94 | FUN_089acdbc | bytes 64 */

void FUN_089acdbc(undefined2 *param_1)

{
  undefined2 uVar1;
  
  if (param_1 != (undefined2 *)0x0) {
    uVar1 = *param_1;
    FUN_089acd20();
    FUN_089ac000(param_1);
    *param_1 = uVar1;
  }
  return;
}

