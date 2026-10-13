/* Entry 0x08881F78 | file offset 0x0007EF50 | FUN_08881f78 | bytes 132 */

void FUN_08881f78(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0885c40c(param_1,0xc2ec00,"SYSTEM MEMORY",0x80);
  *(undefined4 *)(param_1 + 0xecdc00) = uVar1;
  uVar1 = FUN_0885c40c(param_1 + 0xc2ec00,0x29f000,"SYSTEM MEMORY SMALL",4);
  *(undefined4 *)(param_1 + 0xecdc04) = uVar1;
  return;
}

