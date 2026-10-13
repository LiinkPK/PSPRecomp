/* Entry 0x08807D10 | file offset 0x00004CE8 | FUN_08807d10 | bytes 52 */

/* Candidate function recovered from a code pointer stored in this EBOOT's initialized data. Pointer
   sites: 089c6c64,089c6ccc,089c6d04,089c6d3c. Boundary still requires runtime validation. */

void FUN_08807d10(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = param_2[1];
  uVar3 = param_2[2];
  uVar2 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = uVar3;
  param_1[3] = uVar2;
  return;
}

