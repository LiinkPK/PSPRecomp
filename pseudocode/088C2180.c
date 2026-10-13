/* Entry 0x088C2180 | file offset 0x000BF158 | FUN_088c2180 | bytes 24 */

/* Candidate function recovered from a code pointer stored in this EBOOT's initialized data. Pointer
   sites: 089d7464. Boundary still requires runtime validation. */

undefined4 FUN_088c2180(undefined4 param_1,int param_2,undefined4 param_3,short *param_4)

{
  short sVar1;
  
  sVar1 = param_4[1];
  *(int *)(param_2 + 4) = (int)*param_4;
  *(int *)(param_2 + 8) = (int)sVar1;
  return 1;
}

