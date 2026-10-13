/* Entry 0x088C3FA0 | file offset 0x000C0F78 | FUN_088c3fa0 | bytes 180 */

/* Candidate function recovered from a code pointer stored in this EBOOT's initialized data. Pointer
   sites: 089d761c. Boundary still requires runtime validation. */

undefined4 FUN_088c3fa0(undefined4 *param_1,undefined4 param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar3 = *param_3;
  iVar5 = DAT_089d712c + 0x3b7a4;
  *param_1 = 0;
  param_1[1] = 1;
  iVar4 = 0;
  do {
    iVar2 = 0;
    piVar1 = (int *)(iVar5 + (char)(&DAT_089cbb7a)[iVar4] * 4);
    do {
      if ((*piVar1 != -1) && (*piVar1 <= iVar3 * 1000)) {
        *param_1 = 1;
        return 1;
      }
      iVar2 = iVar2 + 1;
      piVar1 = piVar1 + 0x23;
    } while (iVar2 < 3);
    iVar4 = iVar4 + 1;
    if (0x1e < iVar4) {
      return 0;
    }
  } while( true );
}

