/* Entry 0x08992594 | file offset 0x0018F56C | FUN_08992594 | bytes 104 */

/* Candidate function recovered from a code pointer stored in this EBOOT's initialized data. Pointer
   sites: 089dd3bc. Boundary still requires runtime validation. */

undefined4 FUN_08992594(int param_1,int param_2)

{
  undefined4 uVar1;
  float fVar2;
  
  if (*(int *)(param_1 + 4) < 0) {
    uVar1 = 0xffffffff;
  }
  else {
    fVar2 = (float)param_2;
    if (param_2 < 0) {
      fVar2 = fVar2 + 4.2949673e+09;
    }
    uVar1 = 0;
    *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) | 0x10;
    *(int *)(param_1 + 0x10) = (int)(fVar2 * 44.1);
  }
  return uVar1;
}

