/* Entry 0x088A3274 | file offset 0x000A024C | FUN_088a3274 | bytes 100 */

bool FUN_088a3274(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_088a3d30(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 4),&LAB_088a33c0,
                       param_1);
  if (iVar1 != 1) {
    *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | 1;
  }
  else {
    *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) & 0xfffffffe;
  }
  return iVar1 == 1;
}

