/* Entry 0x089A6410 | file offset 0x001A33E8 | FUN_089a6410 | bytes 40 */

undefined4 FUN_089a6410(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if ((param_2 == 1) || (uVar1 = 0x80650203, param_2 == 3)) {
    *(char *)(param_1 + 0x21c) = (char)param_2;
    uVar1 = 0;
  }
  return uVar1;
}

