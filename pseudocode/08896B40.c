/* Entry 0x08896B40 | file offset 0x00093B18 | FUN_08896b40 | bytes 120 */

undefined4 FUN_08896b40(int param_1,int param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0xc) == -1) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_088a24d4(1,*(undefined4 *)
                            (*(int *)(param_1 + 4) + param_2 * 0x90 + param_3 * 0x10 + param_4 * 4 +
                            0x20),1,0);
  }
  return uVar1;
}

