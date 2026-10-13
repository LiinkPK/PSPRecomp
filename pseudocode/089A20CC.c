/* Entry 0x089A20CC | file offset 0x0019F0A4 | FUN_089a20cc | bytes 44 */

void FUN_089a20cc(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  uVar2 = 0x50000001;
  if (param_2 == 0) {
    puVar1 = *(undefined4 **)(param_1 + 8);
    uVar2 = 0x50000000;
  }
  else {
    puVar1 = *(undefined4 **)(param_1 + 8);
  }
  *puVar1 = uVar2;
  *(undefined4 **)(param_1 + 8) = puVar1 + 1;
  return;
}

