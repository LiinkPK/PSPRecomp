/* Entry 0x088C2FC0 | file offset 0x000BFF98 | FUN_088c2fc0 | bytes 68 */

/* Candidate function recovered from a code pointer stored in this EBOOT's initialized data. Pointer
   sites: 089d7544. Boundary still requires runtime validation. */

bool FUN_088c2fc0(int *param_1,int param_2,int *param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_2 + *param_3 * 200 + 0xfe3c);
  *param_1 = iVar1;
  param_1[1] = 1;
  return 0 < iVar1;
}

