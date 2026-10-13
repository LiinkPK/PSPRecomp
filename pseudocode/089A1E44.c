/* Entry 0x089A1E44 | file offset 0x0019EE1C | FUN_089a1e44 | bytes 44 */

void FUN_089a1e44(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  uVar2 = 0x9b000001;
  if (param_2 == 0) {
    puVar1 = *(undefined4 **)(param_1 + 8);
  }
  else {
    puVar1 = *(undefined4 **)(param_1 + 8);
    uVar2 = 0x9b000000;
  }
  *puVar1 = uVar2;
  *(undefined4 **)(param_1 + 8) = puVar1 + 1;
  return;
}

