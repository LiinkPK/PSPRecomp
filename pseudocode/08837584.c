/* Entry 0x08837584 | file offset 0x0003455C | FUN_08837584 | bytes 80 */

undefined4 FUN_08837584(int param_1)

{
  short sVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  if (((((*(uint *)(*(int *)(param_1 + 0x3a4) + 4) & 4) != 0) ||
       (sVar1 = *(short *)(param_1 + 0x180), sVar1 == 700)) || (sVar1 == 0x2bd)) ||
     ((sVar1 == 0x2ee || (sVar1 == 0x2ef)))) {
    uVar2 = 1;
  }
  return uVar2;
}

