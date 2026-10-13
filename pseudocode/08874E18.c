/* Entry 0x08874E18 | file offset 0x00071DF0 | FUN_08874e18 | bytes 120 */

/* Candidate function recovered from a code pointer stored in this EBOOT's initialized data. Pointer
   sites: 089c6130. Boundary still requires runtime validation. */

void FUN_08874e18(void)

{
  int iVar1;
  undefined *puVar2;
  
  DAT_09b48250 = 1;
  DAT_09b4835c = 0;
  DAT_09b48358 = 0;
  DAT_09b48860 = 0;
  puVar2 = &DAT_09b487bc;
  iVar1 = 0x9b48360;
  do {
    *(undefined **)(iVar1 + 0x480) = puVar2;
    DAT_09b48860 = DAT_09b48860 + 1;
    puVar2 = puVar2 + -0x24;
    iVar1 = iVar1 + 4;
  } while (DAT_09b48860 < 0x20);
  return;
}

