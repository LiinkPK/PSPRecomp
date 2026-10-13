/* Entry 0x0891C1A4 | file offset 0x0011917C | FUN_0891c1a4 | bytes 88 */

undefined4 FUN_0891c1a4(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_2 < 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_0891c2ec(param_1,param_1 + param_2 * 0x24 + 0x2728,FUN_0891c710);
  }
  return uVar1;
}

