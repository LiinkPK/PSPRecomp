/* Entry 0x088C2ED8 | file offset 0x000BFEB0 | FUN_088c2ed8 | bytes 68 */

/* Candidate function recovered from a code pointer stored in this EBOOT's initialized data. Pointer
   sites: 089d7538. Boundary still requires runtime validation. */

bool FUN_088c2ed8(int *param_1,int param_2,int *param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_2 + *param_3 * 200 + 0xfe38);
  *param_1 = iVar1;
  param_1[1] = 1;
  return 0 < iVar1;
}

