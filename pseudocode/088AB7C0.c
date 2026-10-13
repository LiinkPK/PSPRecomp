/* Entry 0x088AB7C0 | file offset 0x000A8798 | FUN_088ab7c0 | bytes 64 */

bool FUN_088ab7c0(int param_1)

{
  uint uVar1;
  
  if ((*(int *)(param_1 + 0xf08) == 10) && (*(int *)(param_1 + 0xf0c) == 0x3ecc8)) {
    uVar1 = *(uint *)(param_1 + 0xef8) & 0xffffffdf;
  }
  else {
    uVar1 = *(uint *)(param_1 + 0xef8) | 0x20;
  }
  *(uint *)(param_1 + 0xef8) = uVar1;
  return (uVar1 & 0x20) != 0;
}

