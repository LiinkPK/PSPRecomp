/* Entry 0x08890874 | file offset 0x0008D84C | FUN_08890874 | bytes 108 */

void FUN_08890874(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0885c6cc(*(undefined4 *)(param_1 + 4),0x6b800,0x40,0,1,0);
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  uVar1 = FUN_0885c40c(uVar1,0x6b800,"FIELD::MEMORY_TMP",0x10);
  *(undefined4 *)(param_1 + 8) = uVar1;
  return;
}

