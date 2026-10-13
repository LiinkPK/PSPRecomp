/* Entry 0x0880B4D0 | file offset 0x000084A8 | FUN_0880b4d0 | bytes 56 */

/* Candidate function recovered from a code pointer stored in this EBOOT's initialized data. Pointer
   sites: 089c6cbc. Boundary still requires runtime validation. */

void FUN_0880b4d0(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = *(undefined4 *)(param_2 + 0x94);
  uVar3 = *(undefined4 *)(param_2 + 0x98);
  uVar2 = *(undefined4 *)(param_2 + 0x9c);
  *param_1 = *(undefined4 *)(param_2 + 0x90);
  param_1[1] = uVar1;
  param_1[2] = uVar3;
  param_1[3] = uVar2;
  return;
}

