/* Entry 0x0887A5E0 | file offset 0x000775B8 | FUN_0887a5e0 | bytes 24 */

undefined4 FUN_0887a5e0(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_2 == 0) {
    uVar1 = *(undefined4 *)(param_1 + 0x1c);
  }
  else {
    uVar1 = *(undefined4 *)(param_2 + 0x10);
  }
  return uVar1;
}

