/* Entry 0x089A62E0 | file offset 0x001A32B8 | FUN_089a62e0 | bytes 32 */

undefined4 FUN_089a62e0(int param_1,uint param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0x80650202;
  if (param_2 < 0x100) {
    *(char *)(param_1 + 0x20d) = (char)param_2;
    uVar1 = 0;
  }
  return uVar1;
}

