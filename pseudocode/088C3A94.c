/* Entry 0x088C3A94 | file offset 0x000C0A6C | FUN_088c3a94 | bytes 88 */

/* Candidate function recovered from a code pointer stored in this EBOOT's initialized data. Pointer
   sites: 089d75b8. Boundary still requires runtime validation. */

undefined4 FUN_088c3a94(undefined4 *param_1,int param_2)

{
  int iVar1;
  
  param_1[1] = 1;
  iVar1 = 1;
  param_2 = param_2 + 0x11a30;
  do {
    if (*(int *)(param_2 + 0x24) == 0) {
      *param_1 = 0;
      return 0;
    }
    iVar1 = iVar1 + 1;
    param_2 = param_2 + 0x30;
  } while (iVar1 < 0x21);
  *param_1 = 1;
  return 1;
}

