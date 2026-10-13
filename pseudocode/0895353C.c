/* Entry 0x0895353C | file offset 0x00150514 | FUN_0895353c | bytes 220 */

/* Candidate function recovered from a code pointer stored in this EBOOT's initialized data. Pointer
   sites: 089db77c. Boundary still requires runtime validation. */

undefined4
FUN_0895353c(undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = param_3[1];
  uVar3 = param_3[2];
  uVar2 = param_3[3];
  param_4[4] = *param_3;
  param_4[5] = uVar1;
  param_4[6] = uVar3;
  param_4[7] = uVar2;
  uVar1 = param_3[5];
  uVar3 = param_3[6];
  uVar2 = param_3[7];
  param_4[8] = param_3[4];
  param_4[9] = uVar1;
  param_4[10] = uVar3;
  param_4[0xb] = uVar2;
  uVar1 = param_3[9];
  uVar3 = param_3[10];
  uVar2 = param_3[0xb];
  param_4[0xc] = param_3[8];
  param_4[0xd] = uVar1;
  param_4[0xe] = uVar3;
  param_4[0xf] = uVar2;
  *param_4 = param_4[4];
  param_4[1] = param_4[5];
  param_4[2] = param_4[6];
  param_4[3] = param_4[7];
  return 1;
}

