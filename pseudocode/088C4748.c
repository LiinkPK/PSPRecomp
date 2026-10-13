/* Entry 0x088C4748 | file offset 0x000C1720 | FUN_088c4748 | bytes 52 */

/* Candidate function recovered from a code pointer stored in this EBOOT's initialized data. Pointer
   sites: 089d7678. Boundary still requires runtime validation. */

bool FUN_088c4748(int *param_1,int param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_2 + 0xfdd4) + *(int *)(param_2 + 0xfdd8) + *(int *)(param_2 + 0xfddc);
  *param_1 = iVar1;
  iVar2 = *param_3;
  param_1[1] = iVar2;
  return iVar2 <= iVar1;
}

